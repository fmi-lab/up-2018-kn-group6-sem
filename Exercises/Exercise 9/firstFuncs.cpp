#include<iostream>
using namespace std;

int sum (double x, double y)
{
    return x+y;
}

void printArr(int arr[10])
{
    for(int i = 0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void printArr2(int arr[10], int i)
{
    if(i<10)
    {
        printArr2(arr, i+1);
        cout<<arr[i]<<endl;
    }
}

bool greaterThan (double x, double y){
    return x>y;
}

double max2(double x, double y){
    if(greaterThan(x, y)){ /// x>y
        return x;
    }
    return y;
}

int main()
{
    cout<<sum(3,5)<<endl;
    int arr1[10];
    for(int i = 0; i<10; i++)
    {
        arr1[i] = i;
    }
    printArr2(arr1, 0);

    cout<<max2(7,5);

}
