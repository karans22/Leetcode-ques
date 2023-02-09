class Solution:
    def partition(self, s: str) -> List[List[str]]:
        r=[]
        p=[]
        self.func(0,s,r,p)
        return r
    def func(self,i,s,r,p):
        if i==len(s):
            r.append(p[:])
            return
        for j in range(i,len(s)):
            if self.pa(s,i,j):
                p.append(s[i:j+1])
                self.func(j+1,s,r,p)
                p.pop()
    def pa(self,s,i,j):
        while i<=j:
            if s[i]!=s[j]:
                return False
            i+=1
            j-=1
        return True
