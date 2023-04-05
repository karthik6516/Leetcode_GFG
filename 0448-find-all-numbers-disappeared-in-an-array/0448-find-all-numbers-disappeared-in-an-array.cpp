class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        int n=nums.size()+1;
        int a[n];
       for(int i=0;i<n;i++)
       {
           a[i]=0;
       }
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(int i=1;i<n;i++)
        {
           if(a[i]==0)  v.push_back(i);
        }
        return v;
    }
};