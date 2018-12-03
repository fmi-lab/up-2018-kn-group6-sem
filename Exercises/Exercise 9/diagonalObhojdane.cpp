#include<iostream>
#include<iomanip>
using namespace std;

void diagonalPrint (int matrix[100][100], int sizeM){
    for(int i = 0; i<sizeM; i++){ /// i = sum of indexes
        for(int j = 0; j<i+1; j++){
            cout<<setw(3)<<matrix[j][i-j];
        }
        cout<<endl;
    }

    for(int i = sizeM + 1; i < 2*sizeM; i++){
        for(int j = 0; j<2*sizeM - i; j++){
//            cout<<i-sizeM+j<<'/'<<sizeM-j-1<<' ';
            cout<<setw(3)<<matrix[i-sizeM+j][sizeM-j-1];
        }
        cout<<endl;
    }
}

void diagonalPrint2(int matrix[100][100], int sizeM){
    for(int i = 0; i<2*sizeM-1; i++){
        for(int j = 0; j<sizeM; j++){
            if(i<sizeM && j<i+1){
                cout<<j<<'/'<<i-j<<' ';
//                cout<<setw(3)<<matrix[j][i-j];
            } else if(i>=sizeM && j < 2*sizeM - i - 1){
                cout<<i-sizeM+j+1<<'/'<<sizeM-j-1<<' ';
//                cout<<setw(3)<<matrix[i-sizeM+j][sizeM-j-1];
            }
        }
        cout<<endl;
    }
}

int main(){
    int matrix[100][100];
    int sizeM = 5;
    for(int i = 0; i<sizeM; i++){
        for(int j = 0; j<sizeM; j++){
            matrix[i][j] = 5*i + j;
        }
    }

    for(int i = 0; i<sizeM; i++){
        for(int j = 0; j<sizeM; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"***************************\n";

    diagonalPrint2(matrix, 5);
}
