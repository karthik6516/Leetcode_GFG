class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        set<int> s;
        copy(nums.begin(),nums.end(),inserter(s,s.end()));
        for(auto i:s)
        {
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
        if(v.size()>=3)
        return v[2];
        else
            return v.front();
    }
};