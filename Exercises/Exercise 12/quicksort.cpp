/* C implementation QuickSort */
#include<stdio.h>
#include<iostream>

// A utility function to swap two elements
void swap(double& a, double& b)
{
    double t = a;
    a = b;
    b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition2 (double arr[], int low, int high)
{
    double pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(double arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition2(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(double arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%f, ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5,43,65234,1,-543,123,-32,0,213,0};

    double arr1[] = {450, 52.7, 0, -65, 3.9, -75.9, 24, 64, 0.5, -23};
//    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    quickSort(arr1, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr1, n);
    return 0;
}
