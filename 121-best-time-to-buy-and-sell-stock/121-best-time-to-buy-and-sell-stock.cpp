class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int start = 0;
        int end = start;
        int result = 0;
        for(int i=1 ; i<size ; i++){
            if(prices[i] <= prices[start]){
                start = i;
                end = start;
            }else{
                end = i;
                int temp  = prices[end] - prices[start];
                if(temp > result)
                    result = temp;
            }
        }
        return result;
    }
};