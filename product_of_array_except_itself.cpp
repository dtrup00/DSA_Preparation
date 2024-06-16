class Solution {
public:
    //Brute Force
    // vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int> ans;
    //     int prod = 1;
    //     for(int i=0; i<nums.size(); i++) {
    //         for(int j=0; j<nums.size(); j++) {
    //             if(j==i) {
    //                 continue;
    //             }
    //             prod *= nums[j];
    //         }
    //         ans.push_back(prod);
    //         prod = 1;
    //     }
    //     return ans;
    // }
    vector<int> productExceptSelf(vector<int>& nums) { 
        vector<int> ans(nums.size());
        vector<int> leftArr(nums.size());
        vector<int> rightArr(nums.size());
        leftArr[0] = 1;
        rightArr[nums.size()-1] = 1;
        for(int i=1; i<nums.size(); i++) {
            leftArr[i] = leftArr[i-1] * nums[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--) {
            rightArr[i] = rightArr[i+1] * nums[i+1];
        }
        for(int i=0; i<nums.size(); i++) {
            ans[i] = leftArr[i]*rightArr[i];
        }
        return ans;
    }
};