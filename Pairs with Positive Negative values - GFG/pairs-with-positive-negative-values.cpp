//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        vector<int> v;
        sort(a,a+n);
        int i=0,j=n-1;
        while(i<n && j>0)
        {
            if((abs(a[i])==abs(a[j])) && (a[i]<0 && a[j]>0))
            {
                v.insert(v.begin(),a[j]);
                v.insert(v.begin(),a[i]);
                i++;
                j--;
            }
            else if(abs(a[i])<abs(a[j]))
            {
                j--;
            }
            else
            i++;
        }
        //reverse(v.begin(),v.end());
        return v;
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
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends