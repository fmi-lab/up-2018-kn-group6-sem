#include<iostream>
#include<cmath>
# define M_PI 3.14159265358979323846
using namespace std;

double factoriel(int n){
    if(n>1){
        return n * factoriel(n-1);
    } else {
        return 1;
    }
}

double power(double n, int p){
    if(p>0){
        return n*power(n, p-1);
    } else {
        return 1;
    }
}

double sinX(double x, int n){
    int sign;
    if(n%2 == 0){
        sign = 1;
    } else{
        sign = -1;
    }
    if(n<20){
        return sign*power(x, 2*n + 1)/factoriel(2*n+1) + sinX(x, n+1);
    }
    else{
        return 0;
    }
}

double sinX(double x){
    return sinX(x, 0);
}

double sinX2(double x, double fact, double pow, int sign, double last, int n){
    double current = sign*pow/fact;
    cout<<"fabs = "<<fabs(current - last)<<endl;
    if(fabs(current - last) > 0.00005){
        cout<<"fact = "<<fact*2*n*2*(n+1)<<endl;
        n++;
        last = sign*pow/fact;
        return sign*pow/fact + sinX2(x, fact*2*n*2*(n+1),pow*x*x, -sign, last, n);
    } else {
        return 0;
    }
}

double sinX2(double x){
    return sinX2(x, 1, x, 1, 0, 0);
}

int main(){
    cout<<factoriel(5)<<endl;
    cout<<power(2,5)<<endl;
    cout<<sinX(30*M_PI / 180)<<endl;
    cout<<sinX2(30*M_PI / 180)<<endl;
}
