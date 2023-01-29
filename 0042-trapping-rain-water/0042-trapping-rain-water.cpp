class Solution {
public:
    int trap(vector<int>& height) {
        stack <int>s;
        int i=0,ans=0;
        while(i<height.size())
        {
            while(!s.empty() && height[s.top()]<height[i])
            {
                int h=height[s.top()];
                s.pop();
                if(!s.empty())
                {
                    int w=i-s.top()-1;
                    ans+=w*(min(height[i]-h,height[s.top()]-h));
                }
            }
            s.push(i);
            i++;
        }
        return ans;
    }
};