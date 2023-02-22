class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1,m;
        if(n==1)  return nums[0];
        if(nums[s]!=nums[s+1])  return nums[s];
        if(nums[e]!=nums[e-1])  return nums[e];
        while(s<=e)
        {
            m=s+(e-s)/2;
            if((nums[m]!=nums[m-1]) && nums[m]!=nums[m+1])  return nums[m];
            else if((nums[m]==nums[m+1] && m%2==0) || (nums[m]==nums[m-1] && m%2!=0))
               s=m+1;
            else
                e=m-1;
        }
        return nums[m];
    }
};