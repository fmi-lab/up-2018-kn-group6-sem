#include<iostream>
using namespace std;

int main(){
    int arr[10] = { 4, 6, 8, 1, 30, 543, 85, 12, 0, -50 };
    int maximum = arr[0];

    for (int i = 1; i < 10; i++){
//        cout<<arr[i]<<endl;
        if( maximum < arr[i] ){
            maximum = arr[i];
        }
    }
    cout<<maximum;
    return 0;
}
