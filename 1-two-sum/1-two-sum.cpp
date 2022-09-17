class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int x) {
        int n=nums.size();
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(mp.find(x-nums[i])!=mp.end())
            {
                res.push_back(mp[x-nums[i]]);
                res.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};