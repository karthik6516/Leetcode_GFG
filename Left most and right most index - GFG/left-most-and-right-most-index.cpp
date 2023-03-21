//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int temp=0,cnt=0;
        pair<long,long> a;
        int i=0;
        while(i<v.size())
        {
            if(v[i]==x)  {
                cnt=1;
                temp=i;
                break;
            }
            i++;
        }
        a.first=temp;
        while(temp<v.size() && v[temp]==x)  temp++;
        a.second=temp-1;
        if(cnt==0)
        {
            a.first=-1;
            a.second=-1;
        }
        return a;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends