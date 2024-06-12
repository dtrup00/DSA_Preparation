class Solution {
public:
    // vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    //     unordered_map<int, int> mpOne, mpTwo;
    //     for(int i=0; i<arr1.size(); i++) {
    //         mpOne[arr1[i]]++;
    //     }
    //     for(int i=0; i<arr2.size(); i++) {
    //         mpTwo[arr2[i]]++;
    //     }
    //     vector<int> ans;
    //     for(auto it: mpTwo) {
    //         if(mpOne.find(it.first) != mpOne.end()) {
    //             for(int i=0; i<mpOne[it.first]; i++) {
    //                 ans.push_back(it.first);
    //                 auto it3 = find(arr1.begin(), arr1.end(), it.first);
    //                 if(it3 != arr1.end()) {
    //                     arr1.erase(it3);
    //                 }
    //             }
    //             mpOne.erase(it.first);
    //         }
    //     }
    //     reverse(ans.begin(), ans.end());
    //     sort(arr1.begin(), arr1.end());
    //     for(int i=0; i<arr1.size(); i++) {
    //         ans.push_back(arr1[i]);
    //     }

    //     return ans;
    // }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mpOne, mpTwo;
        for(int i=0; i<arr1.size(); i++) {
            mpOne[arr1[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<arr2.size(); i++) {
            for(int j=0; j<mpOne[arr2[i]]; j++) {
                ans.push_back(arr2[i]);
                auto it3 = find(arr1.begin(), arr1.end(), arr2[i]);
                if(it3 != arr1.end()) {
                    arr1.erase(it3);
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for(int i=0; i<arr1.size(); i++) {
            ans.push_back(arr1[i]);
        }
        return ans;
    }
};