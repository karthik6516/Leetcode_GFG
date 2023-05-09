class Solution {
public:
    void reverseString(vector<char>& s) {
        string w;
        for(int i=0;i<s.size();i++)
        {
            w+=s[i];
        }
        reverse(w.begin(),w.end());
        s.erase(s.begin(),s.end());
        for(int i=0;i<w.length();i++)
        {
            s.push_back(w[i]);
        }
    }
};