//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	 vector<int> v,q;
    	 int in=0;
    	 if(n%2==0) in=n/2;
    	 else in=(n/2)+1;
    	 for(int i=0;i<in;i++)
    	 {
    	     q.push_back(arr[i]);
    	 }
    	 for(int i=in;i<n;i++)
    	 {
    	     v.push_back(arr[i]);
    	 }
    	 sort(v.begin(),v.end(),greater<int>());
    	 int i=0,j=0,k=0;
    	 while(i<v.size() && j<q.size())
    	 {
    	     arr[k]=v[i];
    	     i++;
    	     k++;
    	     arr[k]=q[j];
    	     j++;
    	     k++;
    	 }
    	 while(j<q.size())
    	 {
    	     arr[k]=q[j];
    	     j++;
    	 }
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends