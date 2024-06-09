class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        long long int maxPointer = 0;
        vector<long long int> xPointer;
        for(int i=0; i<points.size(); i++) {
            xPointer.push_back(points[i][0]);
        }
        sort(xPointer.begin(), xPointer.end());
        for(int i=0; i<xPointer.size()-1; i++) {
            maxPointer = max(xPointer[i+1] - xPointer[i], maxPointer);
        }
        return maxPointer;
    }
};