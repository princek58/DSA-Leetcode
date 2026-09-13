class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = prices[0],max=0;
        int n = prices.size();
        for(int i = 0; i<n;i++){
             if(prof>prices[i]){
                prof=prices[i];
             }
             if(max<prices[i]-prof){
                max= prices[i]-prof;
             }
        }
        return max;
    }
};