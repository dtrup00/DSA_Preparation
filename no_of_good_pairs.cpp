//1st solution
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int possiblePairs = 0;
        for(int i=0; i<nums.size()-1; i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    possiblePairs++;
                }
            }
        }
        return possiblePairs;
    }
};

//2nd Solution
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mapContent;
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            mapContent[nums[i]]++;
        }

        for(auto it = mapContent.begin(); it != mapContent.end(); it++) {
            sum += ((it->second)*(it->second-1)/2);
        }
        return sum;
    }
};