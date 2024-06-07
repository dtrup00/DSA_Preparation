class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3) return nums.size();
        int j=2;
        for(int i=0; j<nums.size();) {
            if(nums[i] == nums[j]) {
                nums.erase(nums.begin()+j);
            }
            else {
                i++;
                j++;
            }
        }
        return j;
    }
};