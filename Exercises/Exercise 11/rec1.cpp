#include<iostream>
using namespace std;

void printArrRec(int* arr, int sizeArr, int i){
    if(i<sizeArr){
        printArrRec(arr, sizeArr, i+1);
        cout<<i<<" | "<<arr[i]<<endl;
    }
}

void printArr(int* arr, int sizeArr){
    printArrRec(arr, sizeArr, 0);
}

int main(){
    int arr1[100] = {1,2,3,4,5,6,7,8,9,10};
    printArr(arr1, 10);
}

