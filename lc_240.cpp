#include <iostream>
#include <vector>
#include <array>
using namespace std;

class Matrix_2D{
    public:

        int search(vector<vector<int>> &arr, int target){
               
        int m= arr.size();
        int n= arr[0].size();
        int row=0;
        int cols= n-1;  //starting at the end of the first row of elements

        while(row < m && cols >= 0){

            if(arr[row][cols] == target) return true;
            else if(arr[row][cols] < target) row++;
            else cols--;
        }return false;
    }
};

int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    Matrix_2D matrix;
    bool ans= matrix.search(arr, 22);
    if (ans == true) cout<< 'T';
    else cout << 'F';
}