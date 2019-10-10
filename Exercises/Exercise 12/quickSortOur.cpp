#include<iostream>
using namespace std;

void swap2(double& x, double& y)
{
    double z = x;
    x = y;
    y = z;
}

int partition2(double* arr, int lo, int hi)
{
    double pivot = arr[hi];
    int i = lo - 1;

    for(int j = lo; j < hi; j++)
    {
        if(pivot > arr[j])
        {
            i++;
            swap2(arr[j], arr[i]);
        }
    }
    swap2(arr[hi], arr[i+1]);

//    cout<< i+1;
    return i+1;
}

/// The program used to break because we used unsigned ints for the hi and lo values.
/// Since the bottom of the recursion is (lo<hi) and hi used to become a negative number,
/// which in the terms of an unsigned representation is its maximum value,
/// so the program didn't finish as we had expected.
void quickSort(double* arr, int lo, int hi)
{
    if(lo<hi)
    {
        int sorted = partition2(arr, lo, hi);

//        cout<<"lo = "<<lo<<", hi = "<<hi<<", sorted element = "<< arr[sorted]<<endl;

        quickSort(arr, lo, sorted - 1);
        quickSort(arr, sorted + 1, hi);
    }
}

int main()
{
    double arr[] = {40, 23, 5, -52, 43, 10, -0.5, 34.56};
    double arr1[] = {450, 52.7, 0, -65, 3.9, -75.9, 24, 64, 0.5, -23};
    double arr2[] = {3, 4, 1, 5, 2, 6, 3.4, -5.3, -4, 3.5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    quickSort(arr1, 0, n-1);
    for(int i = 0; i<n; i++)
    {
        cout<<arr1[i]<<", ";
    }
}
