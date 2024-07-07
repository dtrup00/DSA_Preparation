class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = 0;
        if(numBottles < numExchange) return numBottles;
        count += numBottles;
        while(numBottles >= numExchange) {
            count += (numBottles / numExchange);
            numBottles = ((numBottles / numExchange) + (numBottles % numExchange));
        }
        return count;
    }
};