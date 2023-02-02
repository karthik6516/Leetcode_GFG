class Solution {
public:
    string concat(string y){
    string x;
    int s=1,cnt=1,z=y.length();
    for(int i=0;i<z;)
    {
        while(y[s]==y[i] )
        {
            if(s==i)
            {
                cnt--;
            }
            cnt++;
            s++;
        }
        x+=to_string(cnt);
        x+=y[i];
        cnt=1;
        i=s;
    }
    return x;
}
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string temp=countAndSay(n-1);
        return concat(temp);
    }
};