#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int matrix[5][5];
    bool posoka = true;

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            matrix[i][j] = i*5 + j;
        }
    }


        for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************************\n";

    for(int i = 0; i<5; i++)
    {
        posoka = i%2 == 0;
        if(posoka)
        {
            for(int j = 0; j<5; j++)
            {
                cout<<matrix[j][i]<<' ';
            }
        }
        else
        {
            for(int j = 4; j>=0; j--)
            {
                cout<<matrix[j][i]<<' ';
            }
        }
    }

//    for(int i = 0; i<5; i++)
//    {
//        for(int j = 0; j<5; j++)
//        {
//            cout<<matrix[j][i];
//        }
//        cout<<endl;
//    }
}
