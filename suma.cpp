#include<iostream>
using namespace std;

int main()
{

    double sum = 0;
    double a = 0; /// a e ot tip double, zashtoto kogato delim na red (*), ako e ot tip int, tova e celochisleno delene, a nie iskame tochno delene.
    int n;
    cin >> n;
    while (a <= n){
        sum += 3*a/(a*a + 7);   /// (*)
        a++;
    }

    cout << "sum = "<<sum<<endl;


    return 0;
}
