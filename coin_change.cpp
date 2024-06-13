class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[++amount];
        dp[0] = 0;
        sort(coins.begin(), coins.end());
        for(int i=1; i<amount; i++) {
            dp[i] = INT_MAX;
            for(int coin: coins) {
                if(i-coin < 0) break;
                if(dp[i-coin] != INT_MAX) dp[i] = min(dp[i-coin]+1, dp[i]);
            }
        }
        return dp[--amount] == INT_MAX ? -1 : dp[amount];
    }
};