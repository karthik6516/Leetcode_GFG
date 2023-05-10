class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n,vector<int>(n,0));
        int cnt=1;
        int rowstart=0,rowend=n-1,columnstart=0,columnend=n-1;
        while(rowstart<=rowend && columnstart<=columnend)
        {
            for(int i=columnstart;i<=columnend;i++)
            {
                a[rowstart][i]=cnt;
                cnt++;
            }
            rowstart++;
            for(int i=rowstart;i<=rowend;i++)
            {
                a[i][columnend]=cnt;
                cnt++;
            }
            columnend--;
            for(int i=columnend;i>=columnstart;i--)
            {
                a[rowend][i]=cnt;
                cnt++;
            }
            rowend--;
            for(int i=rowend;i>=rowstart;i--)
            {
                a[i][columnstart]=cnt;
                cnt++;
            }
            columnstart++;
        }
        return a;
    }
};