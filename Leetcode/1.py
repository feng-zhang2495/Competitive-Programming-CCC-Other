class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        for x in range(len(nums)):
            for y in range(len(nums)):
                if x == y:
                    pass 

                else:
                    if nums[x] + nums[y] == target:
                        returnLIST = [x, y]
                        return returnLIST
        
        
        