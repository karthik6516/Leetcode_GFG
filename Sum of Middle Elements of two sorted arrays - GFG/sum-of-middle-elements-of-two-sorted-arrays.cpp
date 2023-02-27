//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            int x=n;
            int i=0,j=0,k=n-1;
            while(i<n && j<x)
            {
                if(ar2[j]<ar1[i])
                {
                    swap(ar2[j],ar1[k]);
                    j++;
                    k--;
                }
                else
                i++;
            }
            sort(ar1,ar1+n);
            sort(ar2,ar2+n);
           return ar1[n-1]+ar2[0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends