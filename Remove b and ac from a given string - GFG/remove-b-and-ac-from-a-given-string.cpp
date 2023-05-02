//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        for(int i=0;i<str.length();)
        {
            if(str[i]=='b')
            {
                str.erase(str.begin()+i);
                
            }
            else if(str[i]=='a' && str[i+1]=='c')
            {
                str.erase(str.begin()+i);
                str.erase(str.begin()+i);
            }
            else
            i++;
        }
        return str;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends