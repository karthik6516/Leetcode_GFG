class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>> m;
        for(int i=0;i<k;i++)
        {
            m.insert(nums[i]);
        }
        vector<int> v;
        v.push_back(*m.begin());
        for(int i=k;i<nums.size();i++)
        {
            m.insert(nums[i]);
            m.erase(m.lower_bound(nums[i-k]));
            v.push_back(*m.begin());
        }
        return v;
    }
};