class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        realSTR = ''
        for letter in range(len(s)):
            realSTR = s[letter]
            for x in range(letter, len(s)):
                for j in range(realSTR):
                    if realSTR[j] == s[x]:
                        break 

                

            s[letter]