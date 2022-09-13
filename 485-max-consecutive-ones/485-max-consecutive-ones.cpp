class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,max=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                if(c>max)
                {
                    max=c;
                }
                c=0;
            }
        }
        
        if(c>max)
            return c;
        else
            return max;
    }
};