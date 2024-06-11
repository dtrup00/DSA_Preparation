class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int i=0, j=0;
        long long int count = 0, maxScore = INT_MIN;
        for(; i<n, j<n;) {
            if(mp.find(nums[j]) != mp.end()) {
                mp.clear();
                count = 0;
                i++;
                j=i;
            }
            else {
                mp[nums[j]]++;
                count += nums[j++];
                maxScore = max(maxScore, count);
            }
        }
        if(maxScore == INT_MIN) return maxScore;
        return maxScore;
    }
};