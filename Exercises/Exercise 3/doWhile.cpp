#include<iostream>
using namespace std;

int main()
{

    int counter = 0;

    /// Nikoga ne vlizame v cikula, zashtoto counter = 0.
    while (counter != 0){
        counter++;
        cout<<counter<<endl;
    }

    counter = 0;

    /// Vlizame v bezkraen cikul, zashtoto v nachaloto inkrementirame counter s 1 i nasheto usovie vinagi e izpylneno.
    do{
        counter++;
        cout<<counter<<endl;
    } while (counter != 0);

    return 0;
}
