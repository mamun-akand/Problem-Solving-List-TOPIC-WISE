#include<bits/stdc++.h>
using namespace std;

int main(){

    int num[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int s = 14;
    int low=0, high=15, mid;

    while(low <= high){

        mid = (low+high)/2;

        if(s == num[mid])
            break;

        if(s < num[mid])
            high = mid - 1;

        else
            low = mid + 1;

    }

    if(low > high) printf("%d is not found", s);

    else printf("%d is found & it's %dth element", s, mid+1);

    return 0;

}
