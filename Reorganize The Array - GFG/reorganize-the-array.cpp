//{ Driver Code Starts
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


int * Rearrange(int *arr,int n){
    // Complete the function
    vector<int> v;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)  v.push_back(-1);
        else v.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=v[i];
    }
    return arr;
}
