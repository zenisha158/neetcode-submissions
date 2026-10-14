/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int res = guess(mid);     // compare with the hidden number

            if (res == 0) {
                return mid;           // found the number
            } 
            else if (res == -1) {
                end = mid - 1;        // guess is too high
            } 
            else {
                start = mid + 1;      // guess is too low
            }
        }

        return -1;   // should never reach here
    }
};