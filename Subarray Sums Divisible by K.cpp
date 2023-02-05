class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      unordered_map <int, int> m;
      m[0] = 1;
      int t = 0, s = 0;
      for(int i : nums){
         t += i;
         int x = (t % k + k) % k;
         s += m[x];
         m[x]++;
      }
      return s;
    }
};
