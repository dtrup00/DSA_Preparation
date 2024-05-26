class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto finder = word.find(ch);
        reverse(word.begin(), word.begin() + finder + 1);
        return word;
    }
};