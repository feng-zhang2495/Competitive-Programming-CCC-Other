class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        
        else:
            m = str(x)
            temp = ''
            for k in range(len(m) - 1, -1, -1):
                temp += m[k]
            
            if temp == m:
                return True 
            
            else:
                return False