//154. Find Minimum in Rotated Sorted Array II


//first iteration

class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0;
        int r= arr.size()-1;
        int ans= INT_MAX;

        while(l<=r){
            int mid= l+(r-l)/2;
            
            if (arr.size() == 1) {
                ans= arr[0];
                break;
        }

            else if(arr[l] < arr[r]){
                ans= min(ans, arr[l]); 
                break;
            } 

            else if(arr[mid] > arr[l]){
                ans= min(ans, arr[l]);
                l= mid+1;
            }

            else if (arr[mid] == arr[l]) l++ ;               


            else{
                ans=min(arr[mid], ans);
                r= mid-1; 
            }  

        }return ans;
    }
};




//second iteration
