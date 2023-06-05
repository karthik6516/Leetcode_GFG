//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
    
        //Your code here
        int ans=0;
        int i=0,j=0;
        int sumi=0,sumj=0;
        while(i<l1 && j<l2)
        {
            if(A[i]<B[j])
            {
                sumi+=A[i];
                i++;
            }
            else if(B[j]<A[i])
            {
                sumj+=B[j];
                j++;
            }
            else
            {
                ans+=max(sumi,sumj)+A[i];
                sumi=0;
                sumj=0;
                i++;
                j++;
            }
        }
        while(i<l1)
        {
            sumi+=A[i];
            i++;
        }
        while(j<l2)
        {
            sumj+=B[j];
            j++;
        }
        ans+=max(sumi,sumj);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends