class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>a;
        for(int i=1;i<=n;i++)
        {
            string r;
            if(i%3==0)
                r+="Fizz";
            if(i%5==0)
                r+="Buzz";
            if(r.length()==0)
                r+=to_string(i);
            a.push_back(r);
        }
        return a;
    }
};
