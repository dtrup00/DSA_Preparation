class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int symbol = 1;
        long ans = 0;
        while(i<s.size() && s[i] == ' ') {
            i++;
        }
        if(s[i] == '+') i++;
        else if(s[i] == '-') { symbol = (-1); i++; }
        while(i < s.size()) {
            if(isdigit(s[i])) {
                ans = ans * 10 + (s[i] - '0');
                if(ans > INT_MAX && symbol == -1) return INT_MIN; 
                if(ans > INT_MAX && symbol == 1) return INT_MAX; 
                i++;
            }
            else {
                return ans*symbol;
            }
        }
        return ans*symbol;
    }
};