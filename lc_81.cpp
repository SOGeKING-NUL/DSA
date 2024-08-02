class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid= l+(r-l)/2;

            if (arr[mid] == target)
                return true;
            
            else if(arr[mid]== arr[l] && arr[mid]== arr[r]){
                l++;
                r--;
                continue;
            }
        
            else if(arr[mid] >= arr[l] ){
                if(target <= arr[mid] && target >= arr[l])
                    r= mid-1;
                
                else
                    l= mid+1;;

            }
            else {
                if(target >= arr[mid] && target <= arr[r])
                    l= mid + 1;

                else
                    r= mid - 1;
            }
        }return false;
    }
};