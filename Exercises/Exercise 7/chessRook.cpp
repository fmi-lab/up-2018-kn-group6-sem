#include <iostream>
using namespace std;

int main(){
    bool matrix[8][8] = {false};

    int X, Y;

    cin>>X>>Y;

    matrix[X][Y] = true;

    for(int i = X; i < 8; i++){
        matrix[i][Y] = true;
    }

    for(int i = Y; i < 8; i++){
        matrix[X][i] = true;
    }

    for(int i = X; i >= 0; i--){
        matrix[i][Y] = true;
    }

    for(int i = Y; i >= 0; i--){
        matrix[X][i] = true;
    }

    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
