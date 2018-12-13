#include<iostream>
#include<iomanip>
using namespace std;

void printStrMat(char strMat[][100][100], int sizeX, int sizeY)
{
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
//            for(int k = 0; strMat[i][j][k]; k++)
//            {
//                cout<<strMat[i][j][k];
//            }
//            cout<<" / ";
            cout<<setw(15)<<strMat[i][j];
        }
        cout<<endl;
    }
}

int strLen(char str[100]){
    int i;
    for(i = 0; str[i]; i++);
    return i;
}

char* findLongestStrByRow(char strMat[][100][100], int sizeY, int row){
    int longest = 0;
        for(int j = 0; j<sizeY; j++)
        {
            if(strLen(strMat[row][longest]) < strLen(strMat[row][j])){
                longest = j;
            }
        }
        return strMat[row][longest];
}

void printLongestStrByRow(char strMat[][100][100], int sizeY, int row){
    int longest = 0;
        for(int j = 0; j<sizeY; j++)
        {
            if(strLen(strMat[row][longest]) < strLen(strMat[row][j])){
                longest = j;
            }
        }
        cout<<strMat[row][longest]<<endl;
}

void printLongestStrEveryRow(char strMat[][100][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++)
    {
        printLongestStrByRow(strMat, 3, i);
    }
}

char* findLongestStr(char strMat[][100][100], int sizeX, int sizeY){
    int longestSize = 0;
    int currentLongestSize = 0;
    char* longestStr;
    for(int i = 0; i<sizeX; i++)
    {
        currentLongestSize = strLen(findLongestStrByRow(strMat, 3, i));
        if(currentLongestSize > longestSize){
            longestSize = currentLongestSize;
            longestStr = findLongestStrByRow(strMat, 3, i);
        }
    }
    return longestStr;
}

void reverse2(char* str){
    for(int i = 0; i<strLen(str)/2; i++){
        swap(str[i], str[strLen(str)-i-1]);
    }
}

void reverseStrMat(char strMat[][100][100], int sizeX, int sizeY){
        for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            reverse2(strMat[i][j]);
        }
    }
}

int main()
{
    char matrica[100][100][100] = {{"asd", "Hello!", "element"},
        {"new line", "World!", "endline"},
        {"last line", "What's up?", "last element"}};
    printStrMat(matrica, 3, 3);
    printLongestStrEveryRow(matrica, 3, 3);
    cout<<findLongestStr(matrica, 3, 3)<<endl;
    reverseStrMat(matrica, 3, 3);
    printStrMat(matrica, 3, 3);
    return 0;
}
