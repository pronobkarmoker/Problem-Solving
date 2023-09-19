class Solution {
    public int mySqrt(int x) {
        long s = 0;
        long e = (x / 2) + 1;

        while (s < e) {
            long mid = s + (e - s) / 2 + 1;
            long square = mid * mid;
            if (square == x) {
                return (int) mid;
            } else if (square < x) {
                s = mid;

            } else {
                e = mid - 1;
            }
        }
        return (int) s;
    }
}