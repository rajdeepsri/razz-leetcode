//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:

    Node *reverse(Node *head) 
    {
        Node *p = head;
        Node *pre = NULL;
        Node *nxt;
        
        while(p) {
            nxt = p->next;
            p->next = pre;
            
            pre = p;
            p = nxt;
        }
        return pre;
    }
   
    Node *reverse(Node *head, int k)
    {
        if(!head) return NULL;
        
        Node *first = head;
        Node *p = head;
        Node *prev;
        
        int i = 0;
        while(p and i < k) {
            prev = p;
            p = p->next;
            i++;
        }
        prev->next = NULL;
        
        first = reverse(first);
        Node *second = p;
        second = reverse(second);
        
        p = first;
        while(p->next){
            p = p->next;
        }
        p->next = second;
        
        return first;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends