//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    int x,cnt=0;
	    string ans,q="Empty string";
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]==ch)  cnt++;
	        if(cnt==count)  {
	            x=i;
	            break;
	        }
	    }
	    for(int i=x+1;i<S.length();i++)
	    {
	       ans+=S[i];
	    }
	    if(count==0)  return S;
	    return ((ans.length()==0)?q:ans);
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
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends