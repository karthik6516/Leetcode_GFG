//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int temp=0;
       vector<int> v;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>=0)
           v.push_back(arr[i]);
       }
       sort(v.begin(),v.end());
    //   for(int i=0;i<v.size();i++)
    //   {
    //       cout<<v[i]<<" ";
    //   }
    //   cout<<endl;
       int maxi=*max_element(v.begin(),v.end());
       maxi+=2;
       int a[maxi]={0};
       for(int i=0;i<v.size();i++)
      {
         a[v[i]]++;
      }
      for(int i=0;i<maxi;i++)
      {
          if(i!=0 && a[i]==0)
          {
              return i;
              break;
          }
      }
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends