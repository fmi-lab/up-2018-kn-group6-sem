#include<iostream>
#include<iomanip>

using namespace std;

int sum(int x, int y){
    return x+y;
}

void increment1(int x){
    x++;
}

void increment2(int* x){
    (*x)++;
}

void increment3(int& x){
    x++;
}

void funcArr(int* arr){
    arr[0] = 42;
}

void printArr(int* arr, int sizeA){
    for(int i = 0; i<sizeA; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void fillArr(int* arr, int sizeA){
    for(int i = 0; i<sizeA; i++){
        arr[i] = i;
    }
}

int* incrementArr(int* arr, int sizeA){
    int result[10];
    for(int i = 0; i<sizeA; i++){
        result[i] == arr[i];
    }
    return result; ///WRONG!
}

void printMat(int mat[][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++){
        for(int j = 0; j<sizeY; j++){
            cout<<setw(3)<<mat[i][j]<<' ';
        }
        cout<<endl;
    }
}

void fillMat(int mat[][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++){
        for(int j = 0; j<sizeY; j++){
            mat[i][j] = 2*i*sizeY + 2*j;
        }
        cout<<endl;
    }
}

void printBot3x3(int mat[][100]){
    for(int i = 97; i<100; i++){
        for(int j = 97; j<100; j++){
            cout<<*(*mat+i*100+j)<<' ';
        }
        cout<<endl;
    }
}



int main(){
//    cout<<sum(2,4);
//    int i = 0;
//    increment2(&i);
//    cout<<i<<endl;
//    increment3(i);
//    cout<<i<<endl;
    int arr1[10];
//    funcArr(arr1);
//    cout<<arr1[0]<<endl;
//    fillArr(arr1, 10);
//    printArr(arr1, 10);
//    int mat1[100][100];
    int* arr5 = incrementArr(arr1, 10);
    printArr(arr5, 10);
    int mat1[100][100];
    int mat2[10][20];
    fillMat(mat1, 100, 100);
//    printMat(mat1, 10, 10);
    printBot3x3(mat1);

    mat1[2][3] = 42;
    mat1[0][0] = 0;
    mat1[0][3] = 33;

//    cout<<&mat1[2][0] - &mat1[0][0]<<endl<<&mat2[2][0] - &mat2[0][0];

//    cout<<*(mat1)<<endl; ///mat1[0]
//    cout<<*(*mat1)<<endl; ///mat1[0][0]
//    cout<<*(*mat1+3)<<endl; /// mat1[0][3]
//    cout<<*(*mat1+23)<<endl; ///mat1[2][3]

    return 0;
}
