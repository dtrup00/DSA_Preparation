class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0, right = 0;
        vector<string> tPairs;
        string str = "";
        for(int i=0; i<s.size(); ++i){
            if(left > 0 && right > 0 && left == right) {
                tPairs.push_back(str);
                left = 0;
                right = 0;
                str = "";

                if(s[i] == 'L') ++left;
                else if(s[i] == 'R') ++right;
                str += s[i];
            }
            else {
                if(s[i] == 'L') ++left;
                else if(s[i] == 'R') ++right;
                str += s[i];
            }
        }
        return tPairs.size()+1;
    }
};