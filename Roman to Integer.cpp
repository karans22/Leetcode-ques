class Solution {
public:
    int romanToInt(string s) {
        int a=0;
        map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        for(int i=0;i<s.size();i++){
            int j=i+1;
            if(m[s[i]]>=m[s[j]])
                a+=m[s[i]];
            else{ 
                a+=(m[s[j]]-m[s[i]]); 
                i++;
            }
        }
        return a;
    }
};
