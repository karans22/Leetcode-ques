class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> r;
        for(int i=0;i<nums.size();i++)
        {
            if(map.count(target-nums[i]))
            {
                r.push_back(map[target-nums[i]]);
                r.push_back(i);
                return r;
            }
            else map[nums[i]]=i;
        }
        return r;
    }
};
