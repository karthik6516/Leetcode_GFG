class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,sum=0;
        while(i<nums.size()-1)
        {
           int mini=INT_MAX;
            mini=min(mini,min(nums[i],nums[i+1]));
            i+=2;
            sum+=mini;
        }
        return sum;
    }
};