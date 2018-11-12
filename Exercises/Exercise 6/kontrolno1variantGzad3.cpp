#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x, y, maxX = 0, maxY = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>x>>y;
        if(maxX < abs(x))
        {
            maxX = abs(x);
        }
        if(maxY < abs(y))
        {
            maxY = abs(y);
        }
    }

    double S = 2 * maxX * 2 * maxY;
    cout<<"S = "<<S<<endl;
    return 0;
}
