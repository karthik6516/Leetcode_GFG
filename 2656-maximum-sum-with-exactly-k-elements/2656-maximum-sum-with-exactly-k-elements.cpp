class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,sum=0;
        while(i<k)
        {
            sum+=nums[nums.size()-1];
            nums[nums.size()-1]++;
            i++;
        }
        return sum;
    }
};