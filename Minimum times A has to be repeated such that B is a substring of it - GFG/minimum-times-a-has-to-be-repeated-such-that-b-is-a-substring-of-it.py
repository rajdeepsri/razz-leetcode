#User function Template for python3

class Solution:
    def minRepeats(self, A, B):
        # code here 
        t = -(-len(B) // len(A)) # Equal to ceil(len(b) / len(a))
        return t * (B in A * t) or (t + 1) * (B in A * (t + 1)) or -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A=input()
        B=input()
        
        ob = Solution()
        print(ob.minRepeats(A,B))
# } Driver Code Ends