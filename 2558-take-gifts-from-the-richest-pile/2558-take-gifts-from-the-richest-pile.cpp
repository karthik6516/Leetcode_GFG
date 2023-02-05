class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int z=gifts.size()-1;
        long long a=0;
        for(int i=0;i<k;i++)
        {
            sort(gifts.begin(),gifts.end());
            gifts[z]=sqrt(gifts[z]);
        }
        for(int i=0;i<gifts.size();i++)
        {
            a+=gifts[i];
        }
        return a;
    }
};