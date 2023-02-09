class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=0,rev=0;
        if(x<0)
            return false;
        else
        {
            temp=x,rev=0;
            while(temp!=0)
            {
                 long long  rem=temp%10;
                rev=(rev*10)+rem;
                temp/=10;
            }
            return (x==rev);
        }
    }
};