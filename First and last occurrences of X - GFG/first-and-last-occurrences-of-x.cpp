//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int s=0;
        int e=n-1;
        int fi=-1;
        int li=-1;
        vector<int>ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==x){
                fi=mid;
                e=mid-1;
                
            }
            else if(arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        ans.push_back(fi);
        s=0;
        e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==x){
                li=mid;
                s=mid+1;
            }
            else if(arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(ans[0]!=-1){
            ans.push_back(li);
            
            
        }
        return ans;
        
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends