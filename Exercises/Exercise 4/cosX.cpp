#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;
    cin >> x;
    double chislitel = 1;
    double znamenatel = 1;
    double cosX = 0;
    int sign = 1;
    int n = 1;
    double eps = 0.0000000000001;

    while(fabs(chislitel / znamenatel) > eps)
    {
        cosX += chislitel/znamenatel;
        chislitel *= sign * x * x;
//        cout <<"chislitel = "<<chislitel<<endl;
        znamenatel *= 2*n*(2*n-1);
//        cout <<"znamenatel = "<<znamenatel<<endl;
        sign = -sign;
        cosX = chislitel / znamenatel;
        cout <<"cosX = "<<cosX<<endl;
//        cout<<"*********************************\n";
        n++;
    }
    cout << "cosX = "<<cosX<<endl;

    return 0;
}
