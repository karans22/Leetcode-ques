class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> a;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                int t=nums[i]+nums[j]+nums[k];
                if(t==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(t<0)
                    j++;
                else
                    k--;
            }
        }
        for(auto ta:s)
            a.push_back(ta);
        return a;
    }
};
