//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int> v;
        int maxi=*max_element(arr.begin(),arr.end());
        maxi+=1;
        int a[maxi]={0};
        for(int i=0;i<arr.size();i++)
        {
            a[arr[i]]++;
        }
        for(int i=0;i<maxi;i++)
        {
            if(a[i]!=0)  a[i]=1;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(a[arr[i]]==1)
            {
                v.push_back(arr[i]);
                a[arr[i]]--;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends