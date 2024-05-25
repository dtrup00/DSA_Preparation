class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int permDiff = 0;
        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<t.size(); j++) {
                if(s[i] == t[j]) {
                    permDiff += abs(i - j);
                }
            }
        }
        return permDiff;
    }
};