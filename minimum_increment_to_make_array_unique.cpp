class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long int count = 0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i+1] <= nums[i]) {
                count += (abs(nums[i+1]-nums[i])+1);
                nums[i+1] += (abs(nums[i+1]-nums[i])+1);
            }
        }
        return count;
    }
};