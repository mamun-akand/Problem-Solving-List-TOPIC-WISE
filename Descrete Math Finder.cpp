#include<bits/stdc++.h>
using namespace std;

int main(){

    int id, p; string s;

    cout << "Write last 3 digit of your ID : ";
    cin >> id;

    cout << endl << "Write chapter (Example = 1.5) : ";
    cin >> s;

    int cha = s[0] - '0';
    int sec = s[2] - '0';

    if(cha==1.1){
        p = (cha*5 + sec + id%54)+1;
    }

    else if(cha==1.2){
        p = (cha*5 + sec + id%47)+1;
    }

    else if(cha==1.3){
        p = (cha*5 + sec + id%72)+1;
    }

    else if(cha==1.4){
        p = (cha*5 + sec + id%64)+1;
    }

    else if(cha==1.5){
        p = (cha*5 + sec + id%52)+1;
    }

    else if(cha==1.6){
        p = (cha*5 + sec + id%35)+1;
    }

    else if(cha==1.7){
        p = (cha*5 + sec + id%44)+1;
    }

    else{
        int maxi;
        cout << endl << "Enter Maximum Problem Number in Exercise : ";
        cin >> maxi;
        p = (cha*5 + sec + id%maxi)+1;
    }

    cout << endl << "You problem number is : " << p << endl;

    cout << endl << "\"An-Initiative-by-Mamun&Saad\"" << endl;


    return 0;

}
