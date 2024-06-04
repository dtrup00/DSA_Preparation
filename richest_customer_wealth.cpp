class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int score = 0, maxScore = 0;
        for(int i=0; i<accounts.size(); i++) {
            score = 0;
            for(int j=0; j<accounts[i].size(); j++) {
                score += accounts[i][j];
            }
            if(score > maxScore) maxScore = score;
        }
        return maxScore;
    }
};