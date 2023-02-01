//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       int cnt;
       stack <pair<int,int>>s;
       vector <int> v;
       for(int i=0;i<n;i++)
       {
       if(s.empty())
       {
           s.push({price[i],1});
           v.push_back(1);
       }
       else
       {
           cnt=1;
           while(!s.empty() && s.top().first<=price[i])
           {
               cnt+=s.top().second;
               s.pop();
           }
           s.push({price[i],cnt});
           v.push_back(cnt);
       }
       }
       return v;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends