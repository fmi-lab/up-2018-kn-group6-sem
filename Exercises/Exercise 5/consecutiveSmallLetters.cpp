/// Проверява дали има 3 последователни главни букви.
#include<iostream>
using namespace std;

int main()
{
    char str[1024] = "fhAhFJkEM85mnsFje985DFko*(8fjkret03nPE\0";
    int counter = 0;
    int i;
    for(i = 0; str != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            counter ++;
            if(counter == 3)
            {
                cout<<"true\n";
                cout <<"i = "<<i<<endl;
                break;
            }
        } else {
            counter = 0;
        }
    }
    cout <<"i = "<<i<<endl; /// Защо не стига дотук?

    if(counter != 3)
    {
        cout<<"false\n";
    }

    return 0;
}
