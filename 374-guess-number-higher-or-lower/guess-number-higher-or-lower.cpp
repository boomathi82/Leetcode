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
        int lb = 1, ub = n;
        while(lb < ub){
            int mid = lb + (ub - lb) / 2;
            int res = guess(mid);
            if(res == 0)
            return mid;
            if(res == -1){
                ub = mid - 1;
            }else{
                lb = mid + 1;
            }
        }
        return lb;
    }
};