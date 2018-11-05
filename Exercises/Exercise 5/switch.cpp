#include <iostream>
using namespace std;

int main()
{
    char i;

    cin>>i;

    switch(i)
    {
    case '0':
        cout<<"nula";
        break;

    case '1':{
        cout<<"edno\n";
        int j = 0;
        cout << "j = "<<j<<endl;
        break;
    }

    case '2':
        cout<<"dve";
        break;

    default:
        cout<<"default";
        break;

    }

    return 0;
}
