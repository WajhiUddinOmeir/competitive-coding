class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        // int x=0;
        // for(int i=1;i<=n;i++)
        // {
        //     x=x^i;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     x=x^arr[i];
        // }
        // return x;
        int s1=(n*(n+1))/2;
        int s2=accumulate(arr.begin(),arr.end(),0);
        return s1-s2;
    }
};