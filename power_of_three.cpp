class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> counts;
        for(int i=0; i<nums.size(); i++){
            counts[nums[i]]++;
        }
        for(auto it: counts) {
            if(it.second == 1) {return it.first;} 
        }
        return 0;
    }
};