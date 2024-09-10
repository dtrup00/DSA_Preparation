#include <iostream>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> boolAns;
        int maxCandies = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > maxCandies)
                maxCandies = candies[i];
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= maxCandies)
                boolAns.push_back(true);
            else
                boolAns.push_back(false);
        }
        return boolAns;
    }
};