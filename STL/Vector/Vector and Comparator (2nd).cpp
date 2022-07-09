#include<bits/stdc++.h>
using namespace std;

//bool should_i_swap(int a, int b){
//    if(a>b){
//        return true;
//    }
//    else
//        return false;
//}

bool should_i_swap(pair<int,int>a, pair<int,int>b){

    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        return a.second > b.second;
    }

}

int main(){
    int n=5;

    vector < pair<int, int> > v = { {5, 1}, {4, 2}, {3, 2}, {6, 8}, {4, 3} };

//    for(int i=0; i<n; i++){
//        for(int j=i+1; j<n; j++){
//            if( should_i_swap(v[i], v[j]) ){
//                swap(v[i], v[j]);
//            }
//        }
//    }

    sort(v.begin(), v.end(), should_i_swap);

    for(int i=0; i<5; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

}
