class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> v(n,0);
        v[0]=1;
        int i=0,j=0,k=0;
        for(int y=1;y<n;y++)
        {
            v[y]=min(v[i]*2,min(v[j]*3,v[k]*5));
            if(v[y]==v[i]*2)  i++;
            if(v[y]==v[j]*3)  j++;
            if(v[y]==v[k]*5)  k++;
        }
        return    v[n-1];
    }
};