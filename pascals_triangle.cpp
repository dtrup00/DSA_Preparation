class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> totalTr;
        vector<int> currLine;
        int number = 0;
        for(int i=1; i<=numRows; i++) {
            if(i == 1) { currLine.push_back(1); totalTr.push_back(currLine);}
            else if(i == 2) { currLine.push_back(1); currLine.push_back(1); totalTr.push_back(currLine); }
            else {
                currLine.push_back(1);
                for(int j=1; j<=i-2; j++) {
                    int number = totalTr[i-2][j-1] + totalTr[i-2][j];
                    currLine.push_back(number);
                }
                currLine.push_back(1);
                totalTr.push_back(currLine);
            }
            currLine.clear();
        }
        return totalTr;
    }
};