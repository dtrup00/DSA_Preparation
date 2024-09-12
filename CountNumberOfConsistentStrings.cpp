class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> chMap;
        for(int i=0; i<allowed.size(); i++) {
            chMap[allowed[i]]++;
        }

        int ansInt = 0;

        for(int i=0; i<words.size(); i++) {
            string str = words[i];
            unordered_map<char, int> tempCharMap;
            for(int j=0; j<str.size(); j++) {
                tempCharMap[str[j]]++;
            }

            bool flag = true;
            for(auto it: tempCharMap) {
                if(chMap.find(it.first) == chMap.end()) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                ansInt++;
            }
        }
        return ansInt;
    }
};