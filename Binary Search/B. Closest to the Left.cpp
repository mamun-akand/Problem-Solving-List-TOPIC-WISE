#include<bits/stdc++.h>
using namespace std;

int main(){

    long long length, query, i;
    cin >> length >> query;

    long long ara[length], ara2[query];

    for(i=0 ; i<length ; i++){
        cin >> ara[i];
    }

    for(i=0 ; i<query ; i++){
        cin >> ara2[i];
    }


    for(i=0 ; i<query ; i++){

        long long mid, low=0, high=length, ind = 0, j;

        if(ara2[i] < ara[0])
            ind = -1;

        else{

            mid = (low+high)/2;

            NotFound:
            while(low <= high){
                if(ara2[i] == ara[mid]){
                    ind = mid;
                    for(j=mid+1 ; ; j++){
                        if(ara2[i] == ara[j])
                            ind++;
                        else
                            break;
                    }
                }
                if(ara2[i] < ara[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            if(low>high){
                ara2[i]--;
                goto NotFound;
            }

        }
        printf("%lld\n", ind+1);

    }

    return 0;

}
