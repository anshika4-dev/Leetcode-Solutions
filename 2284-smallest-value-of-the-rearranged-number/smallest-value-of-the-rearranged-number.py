class Solution:
    def smallestNumber(self, num: int) -> int:
        if num==0: return 0
        if num<0:
            s="".join(sorted(str(-num),reverse=True))
            return -int(s)
        s=sorted(list(str(num)))
        i=0
        while s[i]=='0':
            i+=1
        s[0],s[i]=s[i],s[0]
        return int("".join(s))

        