#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    double cosX = 0;
    double n = 1;
    double chislitel = 1;
    double znamenatel = 1;
    int sign = 1;
    double eps = 0.000001;

    /// �� ������� ������ (������ n=0) ������ �� ���������� 0!, ������ ������ �������,
    /// �� ������������ � ����� �� 1 � ���������� ���������� �� ���������.

    while (fabs(chislitel / znamenatel) > eps)
    {
        cosX += sign*chislitel/znamenatel;
        chislitel *= x*x;
        znamenatel *= (2*n-1)*2*n; /// ����� ����� ���������� � ������������ �������� �� �������
                                   /// ������ ��������� � �������� ���� �� ������� ��
                                   /// "����������� ���������", �� ������� �� � �����.
                                   /// ������ ��������� ����� ����� ������ ����� �����
                                   /// � ���� ����������, ����� �� ���������� � ������.
        n++;
        sign = -sign;
    }
    cout << "cos(x) = "<<cosX<<endl;
    return 0;
}
