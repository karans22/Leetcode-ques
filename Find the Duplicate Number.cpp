class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, h = nums.size() - 1;
        while(l <=  h)
        {
            int m = l + (h - l) / 2,c=0;
            for(int n : nums)
            {
                if(n <= m)
                    ++c;
            }
            if(c <= m)
                l = m + 1;
            else
                h = m - 1;
        }
        return l;
    }
};
