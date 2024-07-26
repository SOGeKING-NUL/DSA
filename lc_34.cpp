//34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1;
        int ans2=-1;
        int l=0;
        int r=nums.size()-1;


        //for left most occurance
        while(l<=r) {
            int mid= l+(r-l)/2;

            if(nums[mid] == target){
                ans1=mid;
                r= mid-1;        
            }

            else if(nums[mid]>target)
                r= mid-1;
            
            else
                l= mid+1;
        }


        l=0;
        r=nums.size()-1;
        //for right most occurance
        while(l<=r) {
            int mid= l+(r-l)/2;
            
            if(nums[mid] == target){
                ans2=mid;
                l= mid+1;        
            }

            else if(nums[mid]>target)
                r= mid-1;
            
            else
                l= mid+1;
        }
        return {ans1,ans2};
    }
};