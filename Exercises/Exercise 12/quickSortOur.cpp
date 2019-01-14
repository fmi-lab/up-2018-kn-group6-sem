#include<iostream>
using namespace std;

void swap2(double& x, double& y){
    double z = x;
    x = y;
    y = z;
}

int partition2(double* arr, int lo, int hi){
    int i = lo - 1;
    double pivot = arr[hi];
    for(int j = lo; j<hi; j++){
        if(pivot>arr[j]){
            i++;
            swap2(arr[j], arr[i]);
        }
    }
    swap2(arr[hi], arr[i+1]);

//    cout<< i+1;
    return i+1;
}

void quickSort(double* arr, int lo, int hi){
    if(lo<hi){
        int sorted = partition2(arr, lo, hi);
    cout<<"lo = "<<lo<<" hi = "<<hi<<" sorted element = "<< arr[sorted]<<endl;
        quickSort(arr, lo, sorted - 1);
        quickSort(arr, sorted + 1, hi);
    }
}

int main(){
    double arr2[] = {3, 4, 1, 5, 2, 6, 3.4, -5.3, -4, 3.5};
    double arr1[] = {450, 52.7, 0, -65, 3.9, -75.9, 24, 64, 0.5, -23}; /// breaks the program
    quickSort(arr1, 0, 9);
    for(int i = 0; i<10; i++){
        cout<<arr1[i]<<", ";
    }
}
