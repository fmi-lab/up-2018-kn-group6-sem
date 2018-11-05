/// Записва числата, които се делят на 3 от arr във filtered.
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = { 4, 6, 8, 1, 30, 543, 85, 12, 0, -50 };
    int filtered[10] = {0};

    for (int i = 0, j = 0; i < 10; i++)
    {
        if(arr[i] % 3 == 0){
            filtered[j] = arr[i];
            j++;
        }
    }

        for (int i = 0; i < 10; i++)
    {
        cout << filtered[i]<<endl;
    }
    return 0;
}
