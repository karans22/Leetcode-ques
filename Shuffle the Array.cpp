class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> t;
        for(int i=0;i<n;i++){
            t.push_back(nums[i]);
            t.push_back(nums[i+n]);
        }
        return t;
    }
};
