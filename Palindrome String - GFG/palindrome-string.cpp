//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string che,q;
	    if(S.length()%2==0)
	    {
	        for(int i=S.length()/2;i<S.length();i++)
	        {
	            che+=S[i];
	        }
	        for(int i=0;i<S.length()/2;i++)
	        {
	            q+=S[i];
	        }
	    }
	    else
	    {
	        for(int i=(S.length()/2)+1;i<S.length();i++)
	        {
	            che+=S[i];
	        }
	        for(int i=0;i<S.length()/2;i++)
	        {
	            q+=S[i];
	        }
	    }
	    reverse(che.begin(),che.end());
	    if(q==che) return 1;
	    return 0;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends