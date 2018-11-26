#include <iostream>
using namespace std;
int main()
{
    char str[20] = "Hello!";
    char str2[20];
    int  i = 0;
    for(i = 0; str[i]; i++){
        str2[i] = str[i];
    }
    str2[i+1] = '\0';
    cout<<str2;

    return 0;
}
