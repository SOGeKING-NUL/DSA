#include<iostream>
using namespace std;

int print_arr(int arr[],int length){

    for(int i; i<length;i++){
        cout<< arr[i]<<" " ;
    }cout<<endl;
}

int swapalt(int arr[], int length){

    for( int i=0; i<length; i+=2){
        if(i+1 < length){
            swap(arr[i], arr[i+1]);
        }
    }

}


int main(){
    int ness[7]= {5,6,7,8,9,3,2};
    int size;
    
    cout<<"Actual array is "; print_arr(ness,7); cout<< endl;

    cout<< "Swapped array is "; 
    swapalt(ness,7); 
    print_arr(ness,7);
    
    return 0;

}

