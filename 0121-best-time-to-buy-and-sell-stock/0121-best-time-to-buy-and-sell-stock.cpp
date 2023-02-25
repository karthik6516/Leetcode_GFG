class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=0,maxi=0;
        if(prices.size()==1)  return 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<prices[x])  x=i;
            maxi=max(maxi,prices[i]-prices[x]);
        }
        return maxi;
    }
};