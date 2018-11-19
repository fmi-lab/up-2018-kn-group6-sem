#include<iostream>

using namespace std;

int main(){
//    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix[5][5];

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            matrix[i][j] = i*5 + j;
        }
    }


    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************************\n";
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout<<matrix[j][i];
        }
        cout<<endl;
    }
}
