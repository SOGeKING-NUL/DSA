
//278. First Bad Version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0;
        int r=n;
        int result=n; //since the last element will always be bad
        while(l<=r){
            int mid= l+(r-l)/2;
            if(isBadVersion(mid)){
                r=mid-1;
                result= mid;
            }
            else{
                l=mid+1;
            }
        }return result;       
    }
};