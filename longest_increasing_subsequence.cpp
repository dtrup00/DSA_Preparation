class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> sol(nums.size(), 1);
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j] && sol[i] < sol[j]+1) sol[i] = sol[j]+1;
            }
        }
        sort(sol.begin(), sol.end());
        return sol[sol.size()-1];
    }
};