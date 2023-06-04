//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string ans;
            string temp;
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                {
                    reverse(temp.begin(),temp.end());
                    ans+=temp;
                    ans+=s[i];
                    temp.erase();
                }
                else if(i==0)
                {
                    temp+=s[i];
                    reverse(temp.begin(),temp.end());
                    ans+=temp;
                }
                else
                {
                    temp+=s[i];
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends