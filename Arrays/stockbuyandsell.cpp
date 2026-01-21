class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini = prices[0]; 
        int Maxprofit = 0;

        for(int i = 0 ; i < prices.size() ; i++){
            int cost = prices[i] - mini;
            Maxprofit = max(Maxprofit, cost);
            mini = min(mini, prices[i]);
            

            


        }
        return Maxprofit; 
    }
};