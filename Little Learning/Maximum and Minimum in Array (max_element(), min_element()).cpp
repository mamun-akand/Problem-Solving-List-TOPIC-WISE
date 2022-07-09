#include<bits/stdc++.h>
using namespace std;

int main(){
    int ara[] = {1896, 189347, 17, 10, 45454545, 454545};

    int n = sizeof(ara) / sizeof(ara[0]);

    int Maximum = *max_element(ara, ara+n);
    int Minimum = *min_element(ara, ara+n);

    cout << Maximum << endl << Minimum << endl;

    return 0;
}
