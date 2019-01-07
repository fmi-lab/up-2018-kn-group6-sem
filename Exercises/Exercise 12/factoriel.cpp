#include<iostream>
using namespace std;

unsigned int factoriel(unsigned int n){
    if(n == 0){
        return 1;
    } else{
        return n*factoriel(n-1);
    }
}

int main(){
    cout<<factoriel(5);
}
