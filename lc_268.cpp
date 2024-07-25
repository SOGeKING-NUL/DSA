//268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int len=nums.size();
        //Xor of all integers in len
        for(int i=0; i<=len;i++){
            ans=ans^i;
        }

        //Xor of the numbers in the array into the answer
        for(int i=0; i<len;i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};