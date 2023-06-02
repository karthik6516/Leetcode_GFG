//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxi=0,ans=0,cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        cnt=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)  cnt++;
	        }
	        maxi=max(maxi,cnt);
	    }
	    for(int i=0;i<n;i++)
	    {
	        int cnt=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)  cnt++;
	        }
	        if(maxi==cnt)  {
	            ans=i;
	            break;
	        }
	    }
	    return ((maxi==0 && cnt==0)?-1:ans);
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends