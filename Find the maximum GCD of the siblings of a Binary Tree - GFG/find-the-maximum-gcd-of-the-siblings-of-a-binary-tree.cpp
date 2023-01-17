//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

// } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


int gcd(int a,int b)

{

    if(a==0)

        return b;

    return gcd((b%a),a);

}

 

class Solution

{

    

    pair<int,int> comp(pair<int,int> a,pair<int,int> b)

    {

        if(a.second>b.second)

            return a;

        else if(b.second>a.second)

            return b;

        else if(a.first>b.first)

            return a;

        else

            return b;

    }

    

    pair<int,int> solve(Node *root)

    {

        //EMPTY

        if(root==NULL)

            return {0,-1};

        //LEAF

        if(root->left==NULL && root->right==NULL)

            return {0,-1};

        //ONE CHILD

        if(root->left==NULL)

            return solve(root->right);

        if(root->right==NULL)

            return solve(root->left);

        //BOTH CHILD

        

        pair<int,int> l=solve(root->left);

        pair<int,int> r=solve(root->right);

        pair<int,int> me={root->data,gcd(root->left->data,root->right->data)};

        return comp(me,comp(l,r));

    }

    

public:

    int maxGCD( Node* root)

    {

        return solve(root).first;

    }
};




//{ Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
		Solution ob;
		cout<<ob.maxGCD(root)<<endl;
    }
    return 0;
}

// } Driver Code Ends