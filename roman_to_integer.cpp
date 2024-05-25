class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mapString;
        mapString['I']= 1;
        mapString['V']= 5;
        mapString['X']= 10;
        mapString['L']= 50;
        mapString['C']= 100;
        mapString['D']= 500;
        mapString['M']= 1000;
        
        int ans = 0;
        for(int i=0; i<s.size(); i++) {
            if(mapString[s[i]] < mapString[s[i+1]]) ans -= mapString[s[i]];
            else ans += mapString[s[i]];
        }
        return ans;
    }
};