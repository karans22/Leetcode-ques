class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i])
            min=prices[i];
            int temp=prices[i]-min;
            if(temp>max)
            max=temp;
        }
        return max;
    }
};
