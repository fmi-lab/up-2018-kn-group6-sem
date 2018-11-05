#include<iostream>
using namespace std;

int main()
{
    int arr[10] = { 4, 6, 8, 1, 30, 543, 85, 12, 0, -50 };

    for (int i = 0; i<10; i++)
    {
        for ( int j = 0; j < 9-i; j++ )
        {
            if(arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}
