//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,l=1;
        while(i<n && j<m)
        {
            if(l==k) 
            {
                return min(arr1[i],arr2[j]);
            }
            if(arr1[i]<arr2[j])
            {
                i++;
                l++;
            }
            else
            {
                j++;
                l++;
            }
        }
        while(i<n)
        {
            if(l==k)
            {
            return arr1[i];
            }
            i++;
            l++;
        }
         while(j<m)
        {
           if(l==k)
            {
            return arr2[j];
            }
            j++;
            l++;
        }
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends