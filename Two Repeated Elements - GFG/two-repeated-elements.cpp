//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        int maxi=0;
        vector<int> v;
        for(int i=0;i<N+2;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        int a[maxi+1]={0};
        for(int i=0;i<N+2;i++)
        {
            a[arr[i]]++;
            if(a[arr[i]]==2)  v.push_back(arr[i]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends