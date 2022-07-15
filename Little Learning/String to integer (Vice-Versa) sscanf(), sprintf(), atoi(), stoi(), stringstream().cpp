#include<bits/stdc++.h>
using namespace std;

int main(){

    char ara[] = "12345";
    int con_num;

    //string to integer
    sscanf(ara, "%d", &con_num);
    cout << con_num << endl;

    int n = 3579;
    char con_str[100];

    //integer to string
    sprintf(con_str, "%d", n);
    cout << con_str << endl;

            //****

    char ara2[] = "54321";
    int con_num2;

    //string to integer. stoi = for c & c++, atoi = for c
    con_num2 = stoi(ara2);
    cout << con_num2 << endl;

    char ara3[] = "54321111";
    int con_num3;

    con_num3 = atoi(ara3);
    cout << con_num3 << endl;


    return 0;

}

