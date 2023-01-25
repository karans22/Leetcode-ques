class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         vector<int> t1(n+1),t2(n+1);

        for(int i=0;i<trust.size();i++){
            t1[trust[i][0]]++;
            t2[trust[i][1]]++;
        }

        int ans = -1;

        for(int i=1;i<=n;i++){
            if(t1[i] == 0 && t2[i] == n-1)
                ans = i;
        }

        return ans;
    }
};
