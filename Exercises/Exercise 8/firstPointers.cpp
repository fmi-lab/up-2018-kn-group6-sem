#include<iostream>

using namespace std;

int main(){
    int i = 42;
    int* pointer = &i;
    cout<<&i<<endl<<pointer<<endl<<*pointer<<endl;

    int& pointer2 = i;

    cout<<pointer2<<endl;

    *pointer = 50;

    cout<<pointer2<<endl;

    cout<<*pointer<<endl;

    int arr[5];

    arr[0] = 23;
    arr[3] = 60;
    cout<<*(arr + 3)<<endl;
    cout<<sizeof(int);
}
