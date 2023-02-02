class Solution {
public:
    int fib(int n) {
        int a=0,b=1,t;
        if(n<2) return n;
        for(int i=2;i<=n;i++)
        {
            t=a;
            a=b;
            b=a+t;
        }
        return b;
    }
};
