class Solution {
public:
    int mySqrt(int x) {

        // We nned to find out the square root of the given  number
        // Lets use the binary search
        // One thing we know that the square root of the given nummber will be
        // always n/2 means if the given number is 8 then its square root will
        // lies befor the 4 or 4 Loook at the constarints x<=2^31-1 means if you
        // add on eextra eleme nt also it will cross the limit so think and take
        // the action Lets use long here as if we ddo sqrt*sqrt the size will
        // get increase so use long long

        // Base case
        if (x < 2)
            return x;
        int low = 0, high = x / 2;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sqrt = mid * mid;
            if (sqrt == x)
                return mid;
            else if (sqrt < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};