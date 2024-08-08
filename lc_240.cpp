#include <iostream>
#include <vector>
#include <array>
using namespace std;

class Matrix_2D{
    public:
        int ppap=3;
        
        int search(vector<int> &arr, int target){

        }
};

int main(){
    vector<int> arr{{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int m= arr.size();
    int n= arr[0].size();

    Matrix_2D matrix;
    cout<< matrix.search(arr, 11);
}