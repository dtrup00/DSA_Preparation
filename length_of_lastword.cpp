class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int wordCount = 0, startCount = 0;
        while(i >= 0) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {startCount = i; break;}
            else i--;
        }
        while(startCount >= 0 && s[startCount] != ' ') {
            wordCount++;
            startCount--;
        }
        return wordCount;
    }
};