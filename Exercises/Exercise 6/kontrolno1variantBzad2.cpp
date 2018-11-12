/// естествено ч. N, а(0),...а(n-1),
/// за колко a(i) = a(0)+...+a(i-1)?
/// a(i) = a(j)+...+a(i-1)
#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int currentSum = 0, currentNumber, counter = 0;

    for (int i = 0; i<N; i++)
    {
        cin>>currentNumber;
        if(currentNumber == currentSum)
        {
            counter++;
        }
        currentSum += currentNumber;
    }

    cout<<"counter = "<<counter<<endl;


}
