//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int ans=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        maxi+=1;
        int a[maxi]={0};
        int cnt=n/k;
        for(int i=0;i<n;i++)
        {
            a[arr[i]]++;
        }
        for(int i=0;i<maxi;i++){
            if(a[i]>cnt)  ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends