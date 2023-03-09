//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        unordered_map<Node*, pair<int, int>> mp;
        Node* temp = head;
        // cout<<(char)head->data<<endl;
        
        unordered_map<char, int> mp1;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        int cnt = 1;
        while(temp!=NULL){
            if(mp1.find(temp->data)!=mp1.end()){
                mp[temp] = {1, cnt};
                cnt++;
            }
            else{
                mp[temp] = {0, 0};
                cnt = 1;
            }
            temp=temp->next;
        }
        // while(head!=NULL){
        //     cout<<mp[head].second<<" ";
        //     head = head->next;
        // }
        Node* temp1 = head;
        // cout<<temp1->data<<endl;
        Node* prev = head;
        // cout<<prev->data<<endl;
        for(int i=0;i<s.size()-1 && head!=NULL;i++){
            head = head->next;
        }
        Node* curr = NULL;
        curr = head;
        // cout<<curr->data<<endl;
        vector<Node*> ans;
        while(curr!=NULL){
            if(mp[curr].first == 1 && mp[curr].second>=s.size()){
                //cout<<curr->data<<endl;
                unordered_map<char, int> mp2;
                Node* temp2 = prev;
                int flag = 0;
                int num = s.size();
                while(num--){
                    if(mp2[temp2->data]>=mp1[temp2->data]){
                        flag = 1;
                        break;
                    }
                    mp2[temp2->data]++;
                    temp2 = temp2->next;
                }
                if(flag==1){
                    prev = prev->next;
                    // cout<<prev->data<<endl;
                    curr = curr->next;
                }
                else{
                    // cout<<prev->data<<endl;
                    ans.push_back(prev);
                    curr = curr->next;
                    prev = curr;
                    for(int i=0;i<s.size()-1 && curr!=NULL;i++){
                        curr=curr->next;
                    }
                }
            }
            else{
                curr = curr->next;
                prev = prev->next;
            }
        }
        vector<Node*> v;
        for(int i=0;i<ans.size();i++){
            Node* tt = ans[i];
            Node* tt1 = tt;
            for(int j=0;j<s.size()-1;j++){
                tt->next = ans[i]->next;
                ans[i] = ans[i]->next;
                tt = tt->next;
            }
            tt->next = NULL;
            v.push_back(tt1);
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends