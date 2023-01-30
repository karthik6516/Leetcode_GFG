//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        stack <int>s;
        long long ans=0,i=0;
        while(i<n)
        {
            while(!s.empty() && arr[s.top()]<arr[i])
            {
                int h=arr[s.top()];
                s.pop();
                if(!s.empty())
                {
                    int w=i-s.top()-1;
                    ans+=w*(min(arr[i]-h,arr[s.top()]-h));
                }
            }
            s.push(i);
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends