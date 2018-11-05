#include<iostream>
using namespace std;

int main()
{
    char str[20] = "Hello World!";
//    cout << str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] += 'A' - 'a';
        }
        cout << str[i];
    }
    return 0;
}
