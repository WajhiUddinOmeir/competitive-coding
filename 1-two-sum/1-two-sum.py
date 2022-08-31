class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d={}
        k=target
        n=len(nums)
        res=[0,0]
        for i in range(0,n):
            if nums[i] not in d:
                d[k-nums[i]]=i
            else:
                res[0]=d[nums[i]]
                res[1]=i
                break
        #print(res)
        return res
        