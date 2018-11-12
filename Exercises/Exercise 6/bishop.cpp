#include<iostream>
using namespace std;

int main()
{
    bool matrix[8][8] = {false};

    int x, y;

    cin>>x>>y;

    for(int i = x, j = y; i < 8 && j < 8; i++, j++)
    {
        matrix[i][j] = true;
    }

    for(int i = x, j = y; i < 8 && j >= 0; i++, j--)
    {
        matrix[i][j] = true;
    }
    for(int i = x, j = y; i >= 0 && j < 8; i--, j++)
    {
        matrix[i][j] = true;
    }
    for(int i = x, j = y; i >= 0 && j >= 0; i--, j--)
    {
        matrix[i][j] = true;
    }

    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
