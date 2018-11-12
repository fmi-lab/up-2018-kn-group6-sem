#include<iostream>

using namespace std;

int main()
{

    bool matrix[8][8] = {false};

    int x, y;

    cin>>x>>y;

    if(x+2 <= 7 && y+1 <= 7)
    {
        matrix[x+2][y+1] = true;
    }
    if(x+2 <= 7 && y-1 >= 0)
    {
        matrix[x+2][y-1] = true;
    }
    if(x-2 >= 0 && y+1 <= 7)
    {
        matrix[x-2][y+1] = true;
    }
    if(x-2 >= 0 && y-1 >= 0)
    {
        matrix[x-2][y-1] = true;
    }
    if(x+1 <= 7 && y+2 <= 7)
    {
        matrix[x+1][y+2] = true;
    }
    if(x+1 <= 7 && y-2 >= 0)
    {
        matrix[x+1][y-2] = true;
    }
    if(x-1 >= 0 && y+2 <= 7)
    {
        matrix[x-1][y+2] = true;
    }
    if(x-1 >= 0 && y-2 >= 0)
    {
        matrix[x-1][y-2] = true;
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
