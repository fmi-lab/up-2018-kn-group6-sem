#include<iostream>
using namespace std;

int main(){
    int A[20][20];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>A[i][j];
        }
    }
    int counter = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<n-1; j++){
            if(A[i][j-1] == A[i][j] - 1 && A[i][j] == A[i][j+1] - 1 &&
               A[i][j-1] >= 0 && A[i][j] >= 0 && A[i][j+1] >= 0){
                counter++;
                j=n-1;
            }
        }
    }
    cout<<counter;
}
