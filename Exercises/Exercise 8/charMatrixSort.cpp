#include<iostream>
using namespace std;

int main(){
    char matrix [5][15] = {"Zdraveite,", "kolegi!", "Kak", "ste", "dnes?"};

    for(int i = 0; i<5; i++){
        for(int j = 0; matrix[i][j]; j++){
            for(int k = 1; matrix[i][k]; k++){
                if(matrix[i][k-1] >  matrix[i][k]){
                    swap(matrix[i][k-1], matrix[i][k]);
                }
            }
        }
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; matrix[i][j]; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
