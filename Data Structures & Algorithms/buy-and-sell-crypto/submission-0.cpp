class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int rightMax=prices[n-1];
        for(int i=n-2;i>=0;i--){
            ans=max(ans,rightMax-prices[i]);
            rightMax=max(prices[i],rightMax);
        }
        return ans;
    }
};
