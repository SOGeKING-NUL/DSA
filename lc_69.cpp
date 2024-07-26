//Binary Search
class Solution {
public:
    int mySqrt(int x) {

        int r = x;
        int l = 0;        

        while (l<=r){
            long mid= l+(r-l)/2;

            if (mid*mid > x){
                r=mid-1;
            }

            else if (mid*mid < x){
                l=mid+1;
            }

            else{
                return mid;
            }
        }  
        return r;                    
    }
};