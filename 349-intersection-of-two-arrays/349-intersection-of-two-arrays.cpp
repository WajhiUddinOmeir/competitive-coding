class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size(),i=0,j=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> res;
        while(i<n&&j<m)
        {
            if(a[i]==b[j])
            {
                if(res.size() == 0 ||res.back()!=a[i])
                    res.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};