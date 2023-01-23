class Solution:
    def validPalindrome(self, s: str) -> bool:
        if s==s[::-1]:
            return True
        i=0
        j=len(s)-1
        c=0
        while j>i:
            if s[i]==s[j]:
                i+=1
                j-=1
            else:
                a=s[:i]+s[i+1:]
                b=s[:j]+s[j+1:]
                if a==a[::-1] or b==b[::-1]:
                    return True
                else:
                    return False
