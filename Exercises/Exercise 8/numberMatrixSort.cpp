#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int sizeX=5, sizeY=7;
    double matrix[sizeX][sizeY];
    srand(time(NULL));


    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            matrix[i][j] = rand() % 100;
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

    cout<<"****************************************\n";

    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            if(i != sizeX - 1 || j != sizeY - 1)
            {
                for(int k = i; k<sizeX; k++)
                {
                    for(int l = 0; l<sizeY; l++)
                    {
                        if((l != j || i!=k) && (k!=i || l>j))
                        {
                            if(matrix[i][j] > matrix[k][l])
                            {
                                swap(matrix[i][j], matrix[k][l]);
                            }
                        }
                    }
                }
            }
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

    return 0;
}
