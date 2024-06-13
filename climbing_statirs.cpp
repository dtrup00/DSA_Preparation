class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        mp[1] = 1;
        for(int i=2; i<=n; i++) {
            mp[i] = mp[i-1] + mp[i-2];
        }
        return mp[n];
    }
};

class Solution {
public:
    int stairs(int n, unordered_map<int, int>& uMap) {
        if(n == 0 || n == 1) return 1;
        if(uMap.find(n) == uMap.end()) {
            uMap[n] = stairs(n-1, uMap) + stairs(n-2, uMap);
        }
        return uMap[n];
    }
    int climbStairs(int n) {
        unordered_map<int, int> mp;
        return stairs(n, mp);
    }
};