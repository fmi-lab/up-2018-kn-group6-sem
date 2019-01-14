#include<iostream>
using namespace std;

enum Degree{
    Bachelor, Master, PhD
};

struct Student{
    char* name;
    unsigned fn;
    Degree degree;
    unsigned year;
};

int main(){
    Student s1;
    s1.name = "Ivan Ivanov";
    s1.fn = 88888;
    s1.degree = Degree::Bachelor;
    s1.year = 3;

    cout<<s1.name;
    cout<<s1.degree;

}
