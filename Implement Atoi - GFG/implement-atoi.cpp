//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        string ans;
        for(int i=0;i<str.length();i++)
        {
               if(i==0 && ((str[i]=='-' && str[i+1]!='-')||(str[i]>='0' && str[i]<='9')))
                   ans+=str[i];
                if(i!=0 && (str[i]>='0' && str[i]<='9'))
               ans+=str[i];
        }
       // cout<<ans<<endl;
        if(ans.length()==str.length())
        {
        int q=stoi(ans);
        return q;
        }
        else
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends