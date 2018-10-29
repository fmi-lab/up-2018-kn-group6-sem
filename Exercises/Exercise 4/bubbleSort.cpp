#include<iostream>

using namespace std;
int main()
{
    int arr[10] = {5, 32, 54, 19, -4, 24, 3, 75, 34, 12};


    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<9-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
