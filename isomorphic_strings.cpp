class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, char> mp1, mp2;
        for(int i=0; i<s.size(); i++) {
            auto it = mp1.find(s[i]);
            if(it != mp1.end()) {
                if(it->second != t[i]) {
                    return false;
                }
                else continue;
            } else {
                mp1.insert(make_pair(s[i], t[i]));
            }
        }
        for(int i=0; i<t.size(); i++) {
            auto it = mp2.find(t[i]);
            if(it != mp2.end()) {
                if(it->second != s[i]) {
                    return false;
                }
                else continue;
            } else {
                mp2.insert(make_pair(t[i], s[i]));
            }
        }
        return true;
    }
};