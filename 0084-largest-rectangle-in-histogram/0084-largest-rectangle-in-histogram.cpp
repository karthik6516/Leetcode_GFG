class Solution {
public:
    int largestRectangleArea(vector<int> &heights) {
        heights.push_back(0);
        int mh=0,i=0;
        stack<int> s;
        while( i<heights.size())
        {
            while(!s.empty() && heights[s.top()]>heights[i])
            {
                int h=heights[s.top()];
                s.pop();
                if(s.empty())
                {
                    mh=max(mh,h*i);
                }
                else
                {
                  mh=max(mh,h*(i-s.top()-1));   
                }
            }
            s.push(i);
            i++;
        }
        return mh;
    }
};