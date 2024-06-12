class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto it: mp) {
            for(int j=0; j<it.second; j++) {
                nums.push_back(it.first);
            }
        }
    }
};