//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int prices[], int n) {
        //code here
         int mat[n + 1][n + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                mat[i][j] = 0;
            }
            else {
                if (i == 1) {
                    mat[i][j] = j * prices[i - 1];
                }
                else {
                    if (i > j) {
                        mat[i][j] = mat[i - 1][j];
                    }
                    else {
                        mat[i][j] = max(prices[i - 1]
                                            + mat[i][j - i],
                                        mat[i - 1][j]);
                    }
                }
            }
        }
    }
    return mat[n][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends