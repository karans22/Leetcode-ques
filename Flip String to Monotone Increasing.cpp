class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zero=0,one=0,r;
        for(auto i:s){
            if(i=='1')
            one++;
            else{
                zero++;
                zero=min(one,zero);
            }
        }
        return zero;
    }
};
