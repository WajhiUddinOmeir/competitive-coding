class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        while(k<n&&nums[k]!=0)
            k++;
        if(k==n)
            return;
        int i=k,j=k+1;
        while(i<n&&j<n)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
        
    }
};