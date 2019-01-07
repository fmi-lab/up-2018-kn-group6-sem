#include<iostream>
using namespace std;

int fib(unsigned int n){
    if(n == 1 || n == 0){
        return 0;
    } else if(n == 2){
        return 1;
    } else{
        return fib(n-1) + fib(n-2);
    }
}

int printFib(unsigned int n, bool print){
    int result;
    if(n == 1 || n == 0){
        result = 0;
    } else if(n == 2){
        result = 1;
    } else if(print){
        result = printFib(n-1, true) + printFib(n-2, false);
    } else {
        result = printFib(n-1, false) + printFib(n-2, false);
    }
    if(print){
        cout<<result<<endl;
    }
    return result;
}

int main(){
    cout<<fib(9)<<endl;
    printFib(9, true);
}
