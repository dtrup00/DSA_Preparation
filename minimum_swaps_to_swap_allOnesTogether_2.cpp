class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ctrOne = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                ctrOne++;
        }

        if (ctrOne == 0 || ctrOne == nums.size())
            return 0;

        int currOnes = 0;
        for (int i = 0; i < ctrOne; i++) {
            currOnes += nums[i];
        }

        int maxOnes = currOnes;
        for (int i = 0; i < nums.size(); i++) {
            currOnes -= nums[i];
            currOnes += nums[(i + ctrOne) % nums.size()];
            maxOnes = max(maxOnes, currOnes);
        }

        return ctrOne - maxOnes;
    }
};