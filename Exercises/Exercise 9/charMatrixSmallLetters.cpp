#include<iostream>
#include<iomanip>

using namespace std;

void printMatrix(char matrix[100][100], int sizeX, int sizeY)
{
    for(int i = 0; i < sizeX; i++)
    {
//        cout<<matrix[i];
        for(int j = 0; j<sizeY; j++)
        {
            cout<<matrix[i][j];
        }
    }
}

int main()
{

    char matrix[100][100];
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<20; j++)
        {
            if(j==19)
            {
                matrix[i][j] = '\0';
            }
            else
            {
                matrix[i][j] = ('a' + (i*19 + j)%26);
            }
        }
    }

    printMatrix(matrix,5,20);

}
