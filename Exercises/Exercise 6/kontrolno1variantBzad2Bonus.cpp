/// естествено ч. N, а(0),...а(n-1),
/// за колко a(i) = a(0)+...+a(i-1)?
/// a(i) = a(j)+...+a(i-1), j<i-1
#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int currentSum = 0, currentNumber, counter = 0;
    int arr[99999];

    for (int i = 0; i<N; i++)
    {
        cin>>arr[i];
        for(int j = i-2; j>=0; j--)
        {
            currentSum += arr[j];
            if(arr[i] == currentSum)
            {
                counter++;
                break;
            }
        }
        currentSum = 0;
    }

    cout<<"counter = "<<counter<<endl;

    return 0;
}

