class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left,ans=0,0
        m={}
        for right in range(0,len(s)):
            m[s[right]]=m.get(s[right],0)+1
            while m[s[right]]>1:
                m[s[left]]-=1
                left+=1
            ans=max(ans,right-left+1)
        return ans
        
        