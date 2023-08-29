//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
	            return arr[mid];
	        }
	        else if(arr[mid]<arr[mid+1]){
	            s=mid+1;
	        }
	        else{
	            e=mid-1;
	            
	        }
	    }
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends