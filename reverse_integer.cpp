class Solution {
public:
    int reverse(int x) {
        long int p = x;
        long newInteg = 0;
        if(x < 0) {p*=(-1);}
        while(p > 0) {
            int r = p%10;
            newInteg = (newInteg*10) + r;
            p /= 10;
        }
        if(newInteg < INT_MIN || newInteg > INT_MAX) return 0;
        if(x < 0) return (int)newInteg*(-1);
        return (int)newInteg;
    }
};