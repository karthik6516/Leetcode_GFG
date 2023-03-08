class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        int a[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(int i=0;i<101;i++)
        {
            if(a[i]==1)  sum+=i;
        }
             return sum;
    }
};