//{ Driver Code Starts
//Initial Template for C++

// {Driver code starts
#include<bits/stdc++.h>
using namespace std;

//}Driver code ends


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    int uglyNumber(int n)
    {
        //your code here
      vector<int> v(n,0);
      v[0]=1;
      int i=0,j=0,k=0;
      for(int q=1;q<n;q++)
      {
          v[q]=min(v[i]*2,min(v[j]*3,v[k]*5));
          if(v[q]==v[i]*2)  i++;
          if(v[q]==v[j]*3)  j++;
          if(v[q]==v[k]*5)  k++;
      }
      return v[n-1];
    }
    
};



//{ Driver Code Starts.

//{Driver code starts
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        int res;
        res=ob.uglyNumber(n);
        
        cout<<res;
        cout<<"\n";    
    }
}



// } Driver Code Ends