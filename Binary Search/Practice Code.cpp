#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0; i<=10 ; i++){
        int x; cin>>x; v.push_back(x);
    }

    sort(v.begin(), v.end());

    int q; cin >> q;

    int low=0, high=v.size()-1, mid;

    while(high >= low){

        mid = (low+high)/2;

        if(v[mid]==q){
            cout << "Number is found" << endl;
            return 0;
        }

        if(v[mid]>q){
            high = mid-1;
        }
        else if(v[mid]<q){
            low = mid+1;
        }

    }

    cout << "The number is not found" << endl;

    return 0;
}
