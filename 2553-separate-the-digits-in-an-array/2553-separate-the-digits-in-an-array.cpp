class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int>q;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            vector <int>v;
            while(temp!=0)
            {
                int k=temp%10;
                temp/=10;
                v.push_back(k);
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                q.push_back(v[i]);
            }
        }
        return q;
    }
};