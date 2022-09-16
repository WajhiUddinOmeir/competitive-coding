class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int x=0;
        for(int i=1;i<=n;i++)
        {
            x=x^i;
        }
        for(int i=0;i<n;i++)
        {
            x=x^arr[i];
        }
        return x;
    }
};