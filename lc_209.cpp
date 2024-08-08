//209. Minimum Size Subarray Sum

#include <iostream>
#include <algorithm>
#include<array> 
using namespace std;

class sliding_window{
    public:
        int least_sum(int arr[], int target, int arr_len){

            int win_size= INT_MAX;
            int sum = 0;

            //setting up 2 pointers
            int low=0;
            int high=0;

            //first loop itrating through array from high
            while (high < arr_len){
                sum += arr[high];
                high++; //doing this before the loop to ensure min_win_size is never 0

                //since we eventually find a subarray bigger than or equal to target, we now minimize this window
                while(sum >= target){

                    int current_win_size = high -low;

                    //updating min window length
                    win_size= std::min(current_win_size, win_size);
                    
                    //removing elements from the low to accomodate new elements from the high
                    sum -= arr[low];
                    low++;
                }
            }
            if(win_size == INT_MAX) return 0;
            else return win_size;       
        }
    
};


int main(){
    sliding_window Solution;
    int nums[]= {3,1,1,1};
    int arr_len= sizeof(nums)/sizeof(nums[0]);
    int target= 3;
    cout<< Solution.least_sum(nums,target,arr_len);
}