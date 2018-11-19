#include<iostream>

using namespace std;

int main()
{

    int matrix[8][8] = {0};
    int oneTurnX[8];
    int oneTurnY[8];
    int length = 0;



    int x, y;
    int endX, endY;

    cin>>x>>y;
    cin>>endX>>endY;

    if(x+2 <= 7 && y+1 <= 7)
    {
        matrix[x+2][y+1] = 1;
        oneTurnX[length] = x+2;
        oneTurnY[length] = y+1;
        length ++;
    }
    if(x+2 <= 7 && y-1 >= 0)
    {
        matrix[x+2][y-1] = 1;
        oneTurnX[length] = x+2;
        oneTurnY[length] = y-1;
        length ++;
    }
    if(x-2 >= 0 && y+1 <= 7)
    {
        matrix[x-2][y+1] = 1;
        oneTurnX[length] = x-2;
        oneTurnY[length] = y+1;
        length ++;
    }
    if(x-2 >= 0 && y-1 >= 0)
    {
        matrix[x-2][y-1] = 1;
        oneTurnX[length] = x-2;
        oneTurnY[length] = y-1;
        length ++;
    }
    if(x+1 <= 7 && y+2 <= 7)
    {
        matrix[x+1][y+2] = 1;
        oneTurnX[length] = x+1;
        oneTurnY[length] = y+2;
        length ++;
    }
    if(x+1 <= 7 && y-2 >= 0)
    {
        matrix[x+1][y-2] = 1;
        oneTurnX[length] = x+1;
        oneTurnY[length] = y-2;
        length ++;
    }
    if(x-1 >= 0 && y+2 <= 7)
    {
        matrix[x-1][y+2] = 1;
        oneTurnX[length] = x-1;
        oneTurnY[length] = y+2;
        length ++;
    }
    if(x-1 >= 0 && y-2 >= 0)
    {
        matrix[x-1][y-2] = 1;
        oneTurnX[length] = x-1;
        oneTurnY[length] = y-2;
        length ++;
    }


    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"************************************\n";

    for(int i = 0; i<length; i++){
        cout<<oneTurnX[i]<<' '<<oneTurnY[i]<<endl;
    }

    for(int i = 0; i<length; i++)
    {
        if(oneTurnX[i]+2 <= 7 && oneTurnY[i]+1 <= 7)
        {
            matrix[oneTurnX[i]+2][oneTurnY[i]+1] = 2;
            if (oneTurnX[i]+2 == endX && oneTurnY[i]+1 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x+2 <= 7 && y-1 >= 0)
        {

            matrix[oneTurnX[i]+2][oneTurnY[i]-1] = 2;
            if (oneTurnX[i]+2 == endX && oneTurnY[i]-1 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x-2 >= 0 && y+1 <= 7)
        {

            matrix[oneTurnX[i]-2][oneTurnY[i]+1] = 2;
            if (oneTurnX[i]-2 == endX && oneTurnY[i]+1 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x-2 >= 0 && y-1 >= 0)
        {

            matrix[oneTurnX[i]-2][oneTurnY[i]-1] = 2;
            if (oneTurnX[i]-2 == endX && oneTurnY[i]-1 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x+1 <= 7 && y+2 <= 7)
        {

            matrix[oneTurnX[i]+1][oneTurnY[i]+2] = 2;
            if (oneTurnX[i]+1 == endX && oneTurnY[i]+2 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x+1 <= 7 && y-2 >= 0)
        {

            matrix[oneTurnX[i]+1][oneTurnY[i]-2] = 2;
            if (oneTurnX[i]+1 == endX && oneTurnY[i]-2 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x-1 >= 0 && y+2 <= 7)
        {

            matrix[oneTurnX[i]-1][oneTurnY[i]+2] = 2;
            if (oneTurnX[i]-1 == endX && oneTurnY[i]+2 == endY)
            {
                cout<<"Success!\n";
            }
        }
        if(x-1 >= 0 && y-2 >= 0)
        {

            matrix[oneTurnX[i]-1][oneTurnY[i]-2] = 2;
            if (oneTurnX[i]-1 == endX && oneTurnY[i]-2 == endY)
            {
                cout<<"Success!\n";
            }
        }
    }

    cout<<"************************************\n";

    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }


    cout<<matrix[endX][endY];


    return 0;
}

