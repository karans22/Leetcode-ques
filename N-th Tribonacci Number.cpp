class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1,t;
        if(n==0) return a;
        else if(n<=2) return b;
        for(int i=3;i<=n;i++)
        {
            t=a;
            a=b;
            b=c;
            c=a+b+t;
        }
        return c;
    }
};
