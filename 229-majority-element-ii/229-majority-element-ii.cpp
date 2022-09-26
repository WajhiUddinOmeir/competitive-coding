class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
int n = nums.size();
int x = n/3;
if(n<2){
return nums;
}
if(n==2){
if(nums[0]==nums[1]){
v.push_back(nums[0]);
return v;
}
return nums;
}
//Optimal Approach Boyer Moore Voting Algorithm
int num1=INT_MIN, num2=INT_MIN, c1=0,c2=0;
for(int i =0;i<n;i++){
if(nums[i] == num1){
c1++;
} else if (nums[i] == num2){
c2++;
} else if(c1==0){
num1 = nums[i];
c1=1;
} else if(c2==0){
num2 = nums[i];
c2=1;
} else{
c1--;
c2--;
}
}
c1=0;
c2=0;
for(int i =0;i<n;i++){
if(nums[i] == num1){
c1++;
} else if(nums[i] == num2){
c2++;
}
}
if(c1>x){
v.push_back(num1);
}
if(c2>x){
v.push_back(num2);
}
return v;
    }
};