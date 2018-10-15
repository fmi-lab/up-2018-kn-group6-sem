#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Ax, Ay, Bx, By, Cx, Cy;

    cout<<"Vuvedete koordinatite na vyrhovete na triugulnika:\n";
    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

    double a, b, c;

    a = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    b = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
    c = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));


    cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;

    if(a + b <= c || a + c <= b || b + c <= a)
    {
        cout<<"Nqma takuv triagalnik!\n";
        return 0;
    }

    double ma, mb, mc;

    ma = sqrt(2*c*c + 2*b*b - a*a)/2;
    mb = sqrt(2*a*a + 2*c*c - b*b)/2;
    mc = sqrt(2*a*a + 2*b*b - c*c)/2;

    cout<<"ma = "<<ma<<"\nmb = "<<mb<<"\nmc = "<<mc<<endl;

    double la, lb, lc;

    la = sqrt(b*c - b*c*a*a/pow(b+c, 2));
    lb = sqrt(a*c - a*c*b*b/pow(a+c, 2));
    lc = sqrt(a*b - a*b*c*c/pow(a+b, 2));

    cout<<"la = "<<la<<"\nlb = "<<lb<<"\nlc = "<<lc<<endl;

    double p, S;

    p = (a + b + c) / 2;

    S = sqrt(p * (p-a) * (p-b) * (p-c));

    cout<<"p = "<<p<<endl;
    cout<<"S = "<<S<<endl;

    ha = 2*S / a;
    hb = 2*S / b;
    hc = 2*S / c;

    cout<<"ha = "<<ha<<"\nhb = "<<hb<<"\nhc = "<<hc<<endl;

    return 0;
}
