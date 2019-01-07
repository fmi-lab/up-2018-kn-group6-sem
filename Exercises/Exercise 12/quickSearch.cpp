#include<iostream>
using namespace std;

int quickSearch(double* arr, double n, unsigned int lo, unsigned int hi)
{
        unsigned int middleIndex = (hi + lo) / 2; /// (hi-lo)/2 + lo <=> middle element
//        cout<<"lo = "<<lo<<" hi = "<<hi<<" current element = "<< arr[middleIndex]<<endl;
    if(lo<=hi)
    {
        if(arr[middleIndex] == n)
        {
            return middleIndex;
        }
        else if(arr[middleIndex] > n)
        {
            return quickSearch(arr, n, lo, middleIndex - 1);
        }
        else if(arr[middleIndex] < n)
        {
            return quickSearch(arr, n, middleIndex + 1, hi);
        }
    }
    return -1;
}

int main(){
    double arr1[] = {-63, -52.5, -34, -0.5, 0, 3, 5.9, 54, 150.7, 1000};
    cout<<quickSearch(arr1, -34, 0, 9);
    cout<<quickSearch(arr1, 50, 0, 9);
}
