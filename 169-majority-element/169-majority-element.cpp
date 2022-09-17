class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                res=nums[i];
            }
            if(res==nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return res;
        
    }
};