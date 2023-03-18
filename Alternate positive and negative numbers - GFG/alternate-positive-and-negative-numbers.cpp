//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> v;
	    vector<int> s;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)  v.push_back(arr[i]);
	        else s.push_back(arr[i]);
	    }
	    int i=0;
	       int l=0,k=0;
	       while(i<n && l<s.size() && k<v.size())
	       {
	       arr[i]=v[l];
	       arr[i+1]=s[k];
	       l++;
	       k++;
	       i+=2;
	       }
	       while(l<v.size())
	       {
	           arr[i]=v[l];
	           i++;
	           l++;
	       }
	       while(k<s.size())
	       {
	           arr[i]=s[k];
	           i++;
	           k++;
	       }
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends