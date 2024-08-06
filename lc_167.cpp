class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l=0;;
        int r= arr.size() - 1;

        while(l<=r){

            int sum = arr[l] + arr[r];
            if (sum == target) return {l+1 , r+1};
            else if(sum > target ) r--;
            else l++;

        } return {-1, -1};     
    }
};