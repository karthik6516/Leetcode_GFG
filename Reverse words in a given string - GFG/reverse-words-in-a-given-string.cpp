//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans;
        int i=S.length()-1;
        string w,e;
        while(i>=0)
        {
            if(i!=0 && S[i]=='.')
            {
            ans+=w;
            reverse(ans.begin(),ans.end());
            ans+=S[i];
            e+=ans;
            w.erase();
            ans.erase();
            }
            else if(i==0)
            {
            ans.erase();
            ans+=w;
            ans+=S[i];
            reverse(ans.begin(),ans.end());
            e+=ans;
            }
            else{
            w+=S[i];
            }
            i--;
        }
       return e;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends