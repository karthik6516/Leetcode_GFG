//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        bool ans=true;
        int q[26]={0},w[26]={0};
        for(int i=0;i<a.length();i++)
        {
            q[a[i]-'a']++;
        }
        for(int i=0;i<b.length();i++)
        {
            w[b[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(q[i]!=w[i]) {
                ans=false;
                break;
            }
            else
            continue;
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends