//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{

public:

    

    bool isPrime(int n)

{

    if (n <= 1)

        return false;

 

    for (int i = 2; i <= sqrt(n); i++)

        if (n % i == 0)

            return false;

 

    return true;

}

 

    int nearest(int num){

        int a,b=10000,n=num;

        

        while(n){

        if(isPrime(n)) {

            a=n;

            break;

            }

        else n++;

        }

        

        n=num;

        

        while(n!=0){

        if(isPrime(n)) {

            b=n;

            break;

            }

        else n--;

        }

        

        if(b==10000) return a;

        

        if(a-num>=num-b) return b;

        

        else return a;

    }

    

    Node *primeList(Node *head){

        

        Node* temp = head;

        

        while(temp!=NULL){

            temp->val=nearest(temp->val);

            temp=temp->next;

        }

    return head;    

    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends