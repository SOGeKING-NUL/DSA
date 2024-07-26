//Median of Sorted Arrays

//first iteration
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merging arrays
        int len1= nums1.size();
        int len2= nums2.size();

        int len3= len1 + len2;
        int nums3[len3];

        for(int i=0; i<len1; i++){
            nums3[i]=nums1[i];
        }
        for(int i=len1; i<len2; i++){
            nums3[i]=nums2[i];
        }


        //sorting the new array
        int key;
        for(int i=1; i<len3;i++){
            key= nums3[i];
            int j=i-1;
            
            while(j>=0 && nums3[j]> key){
                nums3[j+1]=nums3[j];
                j-=1;
            }nums3[j+1]=key;
        } 


        //finding median
        int mid= len3/2;
        if(mid%2 ==0){
            return nums3[mid];
        }

        else{
            int ans= (nums3[mid]+nums3[mid+1])/2;
            return ans;
        }
    }
};



//SECOND ITERATION

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1= nums1.size();
        int len2= nums2.size();
        int total_len=len1+len2;

        if (len1> len2){
            return findMedianSortedArrays(nums2,nums1);
            // since we always want to have the smaller array first
        }

        int left= (len1 +len2 +1)/2;  //this is the number of elements on the left of the partition.
        int l = 0, r = len1;

        //binary serach
        while(l<=r){
            int mid1= l+(r-l)/2;// this takes the mid of the first array
            int mid2= left-mid1;

            int l1= INT_MIN, l2= INT_MIN; 
            int r1= INT_MAX, r2= INT_MAX; //just in case the values dont exist

            if(mid1<len1){r1=nums1[mid1];}
            if(mid2<len2){r2=nums2[mid2];}

            if(mid1-1>=0){l1=nums1[mid1-1];}
            if(mid2-1>=0){l2=nums2[mid2-1];}

            //implementing the conditions
            if(l1<=r2 && l2<=r1){

                //if odd elements
                if(total_len%2==1){
                    return max(l1,l2);
                }

                else{
                    return ((double)(max(l1,l2)+ min(r1,r2)))/2.0; 
                    //type casting required since we are taking mean of 2 elements
                }
            }

            else if(l1>r2){
                r = mid1-1;
            }

            else if(l2>r1){
                l= mid1+1;
            }

        }return -1;

}
};