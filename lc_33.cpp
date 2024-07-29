//33.earch in Rotated Sorted Array


//FIRST ITERATION
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        int pivot;

        //to find pivot -not approved
        while(l<=r){
            int mid= l+(r-l)/2;

            if (nums[mid] == target)
                return mid;
            
            
            else if(nums[mid] < nums[mid+1] ){
                if(nums[mid] > nums[l])
                    l= mid + 1;
                
                else
                    r= mid - 1;

            }
            else if(nums[mid] > nums[mid+1])
                pivot= mid;
        }


        //to find pivot- approved
        while(l<r){   
            
            int mid=l+(r-l)/2;

            if(nums[mid]>=nums[0]){
                l=mid+1;
            }
            else 
                r=mid;        

        }return l;




        while(l<=r){
            int mid=pivot;
            if(nums[mid]> target)
                l= mid + 1;
        }
    }
};



//SECOND INETRATION 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid= l+(r-l)/2;

            if (nums[mid] == target)
                return mid;
        
            else if(nums[mid] >= nums[l] ){
                if(target <= nums[mid] && target >= nums[l])
                    r= mid-1;
                
                else
                    l= mid+1;;

            }
            else {
                if(target >= nums[mid] && target <= nums[r])
                    l= mid + 1;

                else
                    r= mid - 1;
            }
        }return -1;
    }
};