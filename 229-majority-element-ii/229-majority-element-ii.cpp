class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
         int sz = n/3;
  int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
  for (i = 0; i < n; i++) {
    if (nums[i] == num1)
      count1++;
    else if (nums[i] == num2)
      count2++;
    else if (count1 == 0) {
      num1 = nums[i];
      count1 = 1;
    } else if (count2 == 0) {
      num2 = nums[i];
      count2 = 1;
    } else {
      count1--;
      count2--;
    }
  }
  vector < int > ans;
  count1 = count(nums.begin(),nums.end(),num1);
  count2 = count(nums.begin(),nums.end(),num2);
  
  if (count1 > sz)
    ans.push_back(num1);
  if (count2 > sz && num1!=num2)
    ans.push_back(num2);
  return ans;
    }
};