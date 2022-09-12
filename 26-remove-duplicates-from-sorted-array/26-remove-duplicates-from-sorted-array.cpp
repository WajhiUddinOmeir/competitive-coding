class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=i+1,n=nums.size();
        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
        
    }
};