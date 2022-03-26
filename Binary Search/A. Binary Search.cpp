#include<bits/stdc++.h>
using namespace std;

int main(){

    long long length, query, i;
    cin >> length >> query;

    long long ara[length], q_ara[query];

    for(i=0 ; i<length ; i++){
        cin >> ara[i];
    }

    for(i=0 ; i<query ; i++){
        cin >> q_ara[i];
    }


    for(i=0 ; i<query ; i++){

        long long low=0, high=length-1, mid;

        while(low <= high){

            mid = (low+high)/2;

            if(q_ara[i] == ara[mid])
                break;

            if(q_ara[i] < ara[mid])
                high = mid - 1;

            else
                low = mid + 1;

        }

        if(low > high) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;

}
