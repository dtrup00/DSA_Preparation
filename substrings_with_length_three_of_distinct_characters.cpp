class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char, int> mp;
        int i=0, j=i+2, count = 0;
        for(; i<s.size()-2, j<s.size(); i++, j++) {
            string str = "";
            int k=i;
            while(k <= j) {
                if(mp.find(s[k]) != mp.end()) { mp.clear(); break; }
                else {
                    mp[s[k]]++;
                    str += s[k++];
                }
            }
            mp.clear();
            if(str.size() == 3) count++;
        }
        return count;
    }
};