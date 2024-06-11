class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        map<char, int> mp;
        int i=0, j=0, count = 0, maxCount = INT_MIN;
        for(; i<n, j<n;) {
            if((mp.find(s[j]) != mp.end()) && mp[s[j]] == 2) { mp.clear(); count = 0; i++; j=i; continue; }
            else {
                mp[s[j++]]++;
                count++;
                maxCount = max(maxCount, count);
            }   
        }
        if(maxCount == INT_MIN) return 0;
        else return maxCount;
    }
};