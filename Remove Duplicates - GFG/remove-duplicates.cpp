//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string ans;
        int a[26]={0};
        for(int i=0;i<S.length();i++)
        {
            a[S[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)  a[i]=1;
        }
        for(int i=0;i<S.length();i++)
        {
            if(a[S[i]-'a']==1)
            {
                ans+=S[i];
                a[S[i]-'a']--;
            }
        }
        return ans;
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
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends