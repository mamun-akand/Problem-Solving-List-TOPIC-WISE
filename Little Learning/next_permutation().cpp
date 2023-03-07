#include<bits/stdc++.h>
using namespace std;


int main(){

    vector <int> v = {1,4,3,2};
    sort(v.begin(), v.end());

    //number of permutaions n! // Time Complexity : O(n*n!)

    do{

        cout << v[0] <<" "<< v[1] <<" "<< v[2] << " " << v[3] << endl;

    } while( next_permutation( v.begin(), v.end() ) );



    cout << endl << "Afer printing all permutaions:" << endl;
    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    return 0;
}


































