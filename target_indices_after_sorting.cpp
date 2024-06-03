class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int upperPos = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        int lowerPos = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        for(int i=lowerPos+1; i<=upperPos; i++) {
            ans.push_back(i-1);
        }
        return ans;
    }
};