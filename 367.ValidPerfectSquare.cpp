class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1)
            return false;
        long r = num;
        while (r * r > num) {
            r = (r + num / r) / 2;
        }
        return r * r == num;
    }
};
