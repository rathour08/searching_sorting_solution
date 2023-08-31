//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool ispossiblesolution(int A[], int N, int M, int sol){
        int pagesum=0;
        int c=1;
        for(int i=0; i<N; i++){
            if(A[i]>sol){
                return false;
            }
            if(pagesum+A[i]>sol){
                c++;
                pagesum=A[i];
                if(c>M){
                    return false;
                }
            }
            else{
                pagesum+=A[i];
            }
        }
        return true;
        
    }
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int s=0;
        int e=accumulate(A, A+N,0);
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossiblesolution(A,N,M, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        //code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends