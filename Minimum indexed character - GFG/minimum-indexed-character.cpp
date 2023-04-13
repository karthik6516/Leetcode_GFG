//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
       int a[26]={0},b[26]={0};
       for(int i=0;i<str.length();i++)
       {
           a[str[i]-'a']++;
       }
       for(int i=0;i<patt.length();i++)
       {
           b[patt[i]-'a']++;
       }
       for(int i=0;i<str.length();i++)
       {
           if(a[str[i]-'a']!=0 && b[str[i]-'a']!=0)  return i;
       }
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
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends