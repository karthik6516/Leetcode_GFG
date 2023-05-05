//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
         int maxia=0,maxib=0,maxi=0,sum=0;
        for(int i=0;i<n;i++)
        {
            maxia=max(maxia,a[i]);
        }
        for(int i=0;i<m;i++)
        {
            maxib=max(maxib,b[i]);
        }
        maxi=max(maxi,max(maxia,maxib));
        maxi+=1;
        int x[maxi]={0},y[maxi]={0};
        for(int i=0;i<n;i++)
        {
            x[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            y[b[i]]++;
        }
        for(int i=0;i<maxi;i++)
        {
            if(x[i]!=0 && y[i]!=0)
            {
                sum+=min(x[i],y[i]);
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int a[n], b[m];
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < m; i++) cin >> b[i];
        Solution obj;
        cout << obj.minRemove(a, b, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends