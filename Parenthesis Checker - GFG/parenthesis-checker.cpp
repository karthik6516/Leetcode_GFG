//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code 
        stack <char>c;
        for(int i=0;i<x.length();i++)
        {
        if(x[i]=='(' || x[i]=='{' || x[i]=='[')  c.push(x[i]);
        if(x[i]==')')
        {
        if(!c.empty() && c.top()=='(')  c.pop();
        else c.push(x[i]);
        }
        if(x[i]=='}'){
        if(!c.empty() && c.top()=='{')  c.pop();
        else c.push(x[i]);
        }
        if(x[i]==']')
        {
        if(!c.empty() && c.top()=='[')  c.pop();
        else c.push(x[i]);
        }
        }
        return c.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends