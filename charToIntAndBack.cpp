#include <iostream>

using namespace std;

int main(){

    char symbol;

    cout<<"Vuvedete simvol, koito e malka bukva, glavna bukba ili chislo: ";
    cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z'){
        cout<<"Simvolut e malka bukva.\n";
    } else if (symbol >= 'A' && symbol <= 'Z'){
        cout<<"Simvolut e glavna bukva.\n";
    } else if (symbol >= '0' && symbol <= '9'){
        cout<<"Simvolut e cifra.\n";
    } else {
        cout<<"Nevaliden vhod!\n";
    }

    return 0;
}
