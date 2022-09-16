class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int fm=-1;
        int sm=-1;
        for(auto i:s)
        {
            if(i>='0'&&i<='9')
            {
                if((i-'0')>fm)
                {
                    sm=fm;
                    fm=(i-'0');
                }
                else if((i-'0')>sm&&(i-'0')!=fm)
                {
                    sm=(i-'0');
                }
            }
        }
        return sm;
    }
};