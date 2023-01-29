//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack <long long>s;
        arr[n]=0;
        long long i=0,ma=0;
        while (i<=n)
        {
            while(!s.empty() && arr[s.top()]>arr[i])
            {
                int h=arr[s.top()];
                s.pop();
                if(s.empty())
                {
                    ma=max(ma,h*i);
                }
                else
                {
                    ma=max(ma,h*(i-s.top()-1));
                }
            }
            s.push(i);
            i++;
        }
        return ma;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends