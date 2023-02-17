class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)  return nums[0];
        sort(nums.begin(),nums.end());
        int cnt=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])  cnt++;
            else
            {
                cnt=1;
            }
             if(cnt>nums.size()/2)  return nums[i];
        }
        return -1;
    }
};