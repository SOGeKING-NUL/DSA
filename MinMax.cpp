#include<iostream>
using namespace std;

int getmax(int arr[], int length){

    int max= INT_MIN;
    for(int i=0; i<length; i++)
    {
        if(arr[i]> max){
            max= arr[i];
        }
    }
    return max;
    }
int getmin(int arr[], int length){

    int min= INT_MAX;
    for(int i=0; i<length; i++)
    {
        if(arr[i]< min){
            min= arr[i];
        }
    }
    return min;
}


int main(){
    int ness[100];
    int size;
    cout<<" enter no. of elemnts in array: ";
    cin>> size;
    cout<<"size is: "<< size<< endl;
    
    for(int j; j<size;j++){
        cout<<"Enter value: ";
        cin>> ness[j];
    }

    cout<< "Maximum value is: " << getmax(ness,size)<<endl;
    cout<< "Minimum value is: " << getmin(ness,size)<<endl;
    return 0;
}
