#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int matrix[4][7];
    int sizeX = 4, sizeY = 7;
    int maxBot = sizeX - 1;
    int maxRight = sizeY - 1;
    int maxTop = 0;
    int maxLeft = 0;
    int x = 0, y = 0;



    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            matrix[i][j] = i*sizeY + j;
        }
    }

    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************************\n";

    cout<<matrix[x][y]<<' ';

    while(maxRight != maxLeft - 1 && maxTop - 1 != maxBot)
    {

        if(y == maxLeft)
        {
            for(int i = x+1; i<=maxBot; i++)
            {
                cout<<matrix[i][maxLeft]<<' ';
            }
            x = maxBot;
            maxLeft++;
            cout<<"maxLeft = "<<maxLeft<<endl;
        }
        else if(x == maxBot)
        {
            for(int i = y+1; i<=maxRight; i++)
            {
                cout<<matrix[maxBot][i]<<' ';
            }
            y = maxRight;
            maxBot--;

            cout<<"maxBot = "<<maxBot<<endl;
        }
        else if(y == maxRight)
        {
            for(int i = x-1; i>=maxTop; i--)
            {
                cout<<matrix[i][maxRight]<<' ';
            }
            x = maxTop;
            maxRight--;
            cout<<"maxRight = "<<maxRight<<endl;
        }
        else if(x == maxTop)
        {
            for(int i = y-1; i>=maxLeft; i--)
            {
                cout<<matrix[maxTop][i]<<' ';
            }
            y = maxLeft;
            maxTop++;
            cout<<"maxTop = "<<maxTop<<endl;
        }
    }


    return 0;
}
