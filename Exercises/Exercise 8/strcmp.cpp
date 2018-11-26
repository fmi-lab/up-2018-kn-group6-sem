#include <iostream>
using namespace std;
int main()
{
    char str[20] = "Hello!";
    char str2[20] = "Hello!";
    int  i = 0;
    bool flag = false;
    for(i = 0; str[i] && !flag; i++)
    {
        if(str[i] != str2[i])
        {
            cout<<str[i] - str2[i]<<endl;
            flag = true;
        }
    }

    if(!flag){
        cout<<0<<endl;
    }


    return 0;
}
