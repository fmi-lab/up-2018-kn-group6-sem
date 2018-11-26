#include <iostream>
using namespace std;
int main()
{
    char str[20] = "Hello!";
    int i;
    for (i = 0; str[i]; i++);

    cout<<i<<endl;


    return 0;
}

