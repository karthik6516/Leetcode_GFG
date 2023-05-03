//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool isprime(int n)
	    {
	        if(n==1) return false;
	        else
	        {
	        for(int i=2;i<=sqrt(n);i++)
	        {
	            if(n%i==0)
	            {
	                return false;
	                break;
	            }
	        }
	        return true;
	        }
	    }
		int Count(int L, int R){
		    // Code here
		   int pc=0,cc=0;
		   for(int i=L;i<=R;i++)
		   {
		       if(isprime(i))
		       pc++;
		       else if(i>1)
		       cc++;
		   }
		   return cc-pc;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends