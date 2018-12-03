#include<iostream>
#include<iomanip>

using namespace std;

void printMaxElProg(int matrix[100][100], int sizeX, int sizeY)
{
    int currentMax = 0;
    int progLength = 0;
    int way = 0; /// 0 - no prog, -1 - decreasing prog, 1 - incresing prog
    int der = 0;

    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 1; j<sizeY; j++)
        {
            if(matrix[i][j] != matrix[i][j-1])
            {
                if(der == matrix[i][j] - matrix[i][j-1])
                {
                    if(der > 0 && currentMax < matrix[i][j])
                    {
                        currentMax = matrix[i][j];
                    }
                    else if (der<0 && currentMax < matrix[i][j-2])
                    {
                        currentMax = matrix[i][j-2];
                    }
                }
                else
                {
                    der = matrix[i][j] - matrix[i][j-1];
                }
            }
        }
//        currentMax = 0;
    }
        cout<<currentMax<<endl;
}


int main()
{
    int matrix[100][100] = {{1, 20, 40, 60}, {2, 1, 0, 5}, {5,0,10,20}};
    printMaxElProg(matrix, 3, 4);
}
