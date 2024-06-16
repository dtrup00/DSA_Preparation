class Solution {
public:
    // int maxSubArray(vector<int>& init) {
    //     if(init.size() == 0) return 0;
    //     if(init.size() == 1) return init[0];

    //     long long int sum = 0, maxSum = INT_MIN;
    //     long long int i=0, j=0;
    //     while(i<init.size()) {
    //         sum += init[j];
    //         maxSum = max(maxSum, sum);
    //         if(j != init.size()-1) {
    //             j++;
    //         } else {
    //             sum = 0;
    //             i++;
    //             j=i;
    //         }
    //     }
    //     if(maxSum == INT_MIN) return 0;
    //     return maxSum;
    // } 
    int maxSubArray(vector<int>& init) {
        long long int sum = 0, maxSum = INT_MIN;
        int i=0;
        while(i<init.size()) {
            sum += init[i++];
            maxSum = max(maxSum, sum);
            if(sum < 0) {
                sum = 0;
            }
        }
        if(maxSum == INT_MIN) return 0;
        return maxSum;
    }
};