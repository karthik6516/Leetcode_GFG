//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	int pcnt=0,ncnt=0;
      sort(arr,arr+n);
      for(int i=0;i<n;i++)
      {
          if(arr[i]>=0)  pcnt++;
      }
      ncnt=n-pcnt;
       if(n==3)
      {
          return arr[0]*arr[1]*arr[2];
      }
      if(pcnt==n)  return arr[n-1]*arr[n-2]*arr[n-3];
      else if(ncnt==n)
      {
          return arr[n-1]*arr[n-2]*arr[n-3];
      }
      else
      {
         int cnt=0;
         for(int j=0;j<n;j++)
         {
             if(arr[j]<0)
             {
                cnt++;
             }
         }
          long long maxi=0;
          maxi=max(maxi,arr[n-1]*arr[n-2]*arr[n-3]);
          if(cnt>=2)
          {
          maxi=max(maxi,arr[0]*arr[1]*arr[n-1]);
          }
          return maxi;
      }
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends