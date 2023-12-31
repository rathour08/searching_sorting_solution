//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int n=A.size();
	    int row=0;
	    int col=n-1;
	    int count=0;
	    while(row>=0 && row<n && col>=0 && col<n){
	        if(A[row][col]==1){
	            col--;
	            
	        }
	        else{
	            count+=col+1;
	            row++;
	            
	        }
	    }
	    return count;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends