//69. Sqrt(x)

class Solution {
public:
    int mySqrt(int x) {

        if(x==0 || x==1)
            return x;
        int r = x;
        int l=1;
        int result=0;        

        while (l<=r){
            int mid= l+(r-l)/2;
            if (mid*mid> x)
                r=mid-1;

            else if (mid*mid==x){
                result=mid;
                break;
            }

            else{ 
                l=mid+1;
            }
        }  
        return result;                    
    }
};