#include<iostream>
using namespace std;

int main()
{
    int matrix[3][4];

    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
