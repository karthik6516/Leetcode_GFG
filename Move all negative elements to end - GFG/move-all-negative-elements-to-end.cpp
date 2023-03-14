//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> v(0,n);
        int i=0,j=0;
        while(i<n)
        {
            if(arr[i]>0) 
                v.push_back(arr[i]);
            i++;    
        }
        
        
        
           while(j<n)
        {
            if(arr[j]<0)  v.push_back(arr[j]);
            j++;
        }
        
        
        for(int k=0;k<n;k++)
        {
            arr[k]=v[k];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends