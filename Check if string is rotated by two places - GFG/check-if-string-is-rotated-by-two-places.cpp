//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()==1 && str2.length()==1)
        {
          if(str1.compare(str2)==0)
          return true;
          return false;
        }
        else
        {
        string temp,tempo,temp1,tempo1;
        for(int i=0;i<str1.length()-2;i++)
        {
            temp+=str1[i];
        }
        for(int i=str1.length()-2;i<str1.length();i++)
        {
            temp1+=str1[i];
        }
        for(int i=2;i<str1.length();i++)
        {
            tempo+=str1[i];
        }
        for(int i=0;i<2;i++)
        {
            tempo1+=str1[i];
        }
        string rtemp=temp1+temp;
        string rtempo=tempo+tempo1;
        int ans=str2.compare(rtemp);
        int ans1=str2.compare(rtempo);
        return ((ans==0 || ans1==0)?true:false);
        }
    }
};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends