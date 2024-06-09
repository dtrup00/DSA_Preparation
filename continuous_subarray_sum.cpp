class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int cumSum = 0;
        for(int i=0; i<nums.size(); i++) {
            cumSum += nums[i];
            int rem = (k==0) ? cumSum : cumSum % k;
            if(mp.count(rem)) {
                if (i-mp[rem] > 1) {
                    return true;
                }
            }
            else {
                mp[rem] = i;
            }
        }
        return false;
    }
};