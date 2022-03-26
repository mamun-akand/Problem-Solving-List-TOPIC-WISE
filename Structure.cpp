#include<bits/stdc++.h>
using namespace std;

struct info{
    string name;
    int age;
    double salary;
};

int main(){

    struct info per1;
    struct info per2;

    //person input
    gets(per1.name);
    cin >> per1.age
        >> per1.salary;

    //output

    cout<< fixed << setprecision(2);

    cout<< "Name : " << per1.name << endl
        << "Age : " << per1.age << endl
        << "Salary : " << per1.salary << endl;

    return 0;

}
