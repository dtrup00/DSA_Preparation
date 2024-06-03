class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);
        sort(str.begin(), str.end());
        int left = 0, right = str.size()-1, sum = 0;
        while(left < right) {
            sum += (str[left++]-'0')*10 + (str[right--]-'0');
        }
        if(left == right) {
            sum += str[left]-'0';
        }
        return sum;
    }
};