//1346. Check If N and Its Double Exist

//FIRST ITERATION
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        //sorting array
        int key;
        for(int i=1; i<arr.size();i++){
            key= arr[i];
            int j=i-1;
            
            while(j>=0 && arr[j]> key){
                arr[j+1]=arr[j];
                j-=1;
            }arr[j+1]=key;
        } 

        //Binary Search

        for(int i=0;i<arr.size();i++){
            int l=0;
            int r=arr.size();
            while(l<=r){
                int mid=l+(r-l)/2;

                if(arr[mid]> i*i){
                    r=mid-1;
                }
                else if(arr[mid]<i*i){
                    l=mid+1;
                }
                else{
                    return mid;
                }
            }
        }return -1;
    } 
};






//SECOND ITERATION

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int len= arr.size();
        for(int i=0; i<len;i++){

            for(int j=0; j<len; j++){
                
                if(i!=j && arr[i]== arr[j]*2){
                    return true;
                }
            }
        }return false;
    }
};