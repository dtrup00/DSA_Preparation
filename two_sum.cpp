class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     int i=0, j=nums.size()-1;
    //     vector<int> sol;
    //     for(; i<nums.size()-1 && i<j;) {
    //         if(nums[i] + nums[j] == target) {
    //             sol.push_back(i);
    //             sol.push_back(j);
    //             return sol;
    //         }
    //         else {
    //             if(j-i == 1) {
    //                 j = nums.size()-1;
    //                 i++;
    //             }
    //             else {
    //                 j--;
    //             }
    //         }
    //     }
    //     return sol;
    // }

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> vec;
        for(int i=0; i<nums.size(); i++) {
            if(mp.find(target-nums[i]) != mp.end()) {
                vec.push_back(i);
                vec.push_back(mp.find(target-nums[i])->second);
                return vec;
            }
            else {
                mp[nums[i]] = i;
            }
        }
        return vec;
    }
};