#include<iostream>
using namespace std;

int main()
{
    int arr[10] = { 4, 6, 8, 1, 30, 543, 85, 12, 0, -50 };

    for (int i = 0; i<10; i++)
    {
        for ( int j = i+1; j < 10; j++ )
        {
            if(arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}
