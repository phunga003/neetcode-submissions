class Solution:
    def rob1(self, nums: List[int]) -> int:

        dp = [0] * len(nums)
        

        for i in range(len(nums)):
            if i == 1:
                dp[i] = max(nums[i], nums[0])
            elif i == 0:
                dp[i] = nums[i]
            else:
                dp[i] = max(dp[i-2] + nums[i], dp[i-1])
            
        return max(dp[len(nums)-1], dp[len(nums)-2])
       
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 0:
            return 0
        if n == 1:
            return nums[0]
            
        return max(self.rob1(nums[1:]), self.rob1(nums[:-1]))
    
     
                
                
