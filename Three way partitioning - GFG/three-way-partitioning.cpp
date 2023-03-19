//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        vector<int>less;
        vector<int>mid;
        vector<int>great;
        for(int i=0;i<array.size();i++)
        {
            if(array[i]<=a)  less.push_back(array[i]);
            if(array[i]>a && array[i]<b)  mid.push_back(array[i]);
            if(array[i]>=b)  great.push_back(array[i]);
        }
        array.clear();
        // for(int i=0;i<less.size();i++)
        // {
        //     cout<<less[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<mid.size();i++)
        // {
        //     cout<<mid[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<great.size();i++)
        // {
        //     cout<<great[i]<<" ";
        // }
        // cout<<endl;
        sort(less.begin(),less.end());
        sort(mid.begin(),mid.end());
        sort(great.begin(),great.end());
        for(int i=0;i<less.size();i++)
        {
            int y=less[i];
            array.push_back(y);
        }
        for(int i=0;i<mid.size();i++)
        {
            int z=mid[i];
            array.push_back(z);
        }
        for(int i=0;i<great.size();i++)
        {
            int x=great[i];
            array.push_back(x);
        }
        // for(int i=0;i<array.size();i++)
        // {
        //     cout<<array[i]<<" ";
        // }
        // cout<<endl;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        
        vector<int> array(N);
        unordered_map<int,int> ump;
        
        for(int i=0;i<N;i++){
            cin>>array[i];
            ump[array[i]]++;
        }
        
        int a,b;
        cin>>a>>b;
        
        vector<int> original = array;

        int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        
        for(int i=0; i<N; i++)
        {
            if(original[i]>b)
                k3++;
            else if(original[i]<=b and original[i]>=a)
                k2++;
            else if(original[i]<b)
                k1++;
        }
        
        Solution ob;
        ob.threeWayPartition(array,a,b);
      
        for(int i=0;i<k1;i++)
        {
            if(array[i]<b)
            kk1++;
        }
        
        for(int i=k1;i<k1+k2;i++)
        {
            if(array[i]<=b and array[i]>=a)
            kk2++;
            
        }
        
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(array[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
        
        for(int i=0;i<array.size();i++)
            ump[array[i]]--;
        
        for(int i=0;i<array.size();i++)
            if(ump[array[i]]!=0)
                ok=0;
        
        if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
    
    return 0;
}

// } Driver Code Ends