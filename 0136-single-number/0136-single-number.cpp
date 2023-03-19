class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        if(nums.size()==1)  return nums[0];
        while(i<nums.size())
        {
            if(nums[i]==nums[i+1]) i+=2;
            else return nums[i];
        }
        return 0;
    }
};