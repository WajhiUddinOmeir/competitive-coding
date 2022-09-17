class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int s=0,m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            m=max(m,s);
            if(s<0)
            {
                s=0;
            }
        }
        return m;
    }
};