class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0) return false;
        stack<int> st;
        for(int i=0; i<s.size(); i++) {
            if(
                (s[i] == ')' || s[i] == '}' || s[i] == ']')
            ) {
                if(st.empty() || 
                    ((s[i] == ')' && st.top() != '(') || 
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '[')
                )) {
                    return false;
                }
                else {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};