//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        long long ans=0;
        int cnt=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)  cnt++;
        }
        for(int i=0;i<k;i++)
        {
            if(cnt>i)
            {
            if(a[i]>0) a[i]=-1*a[i];
            else a[i]=-1*a[i];
            }
            else
            break;
        }
        sort(a,a+n);
        for(int i=0;i<k-cnt;i++)
        {
            if(a[0]>0) a[0]=-1*a[0];
            else a[0]=-1*a[0];
        }
        for(int i=0;i<n;i++)
        {
            ans+=a[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends