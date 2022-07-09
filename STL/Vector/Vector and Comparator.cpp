#include<bits/stdc++.h>
using namespace std;

//bool should_i_swap(int a, int b){
//    if(a<b)
//        return true;
//    else
//        return false;
//}

////bool should_i_swap(pair <int, int> a, pair <int, int> b){
////    if(a.first == b.first){
////        if(a.second < b.second) return true;
////        else return false;
////    }
////    else{
////        if(a.first > b.first) return true;
////        else return false;
////    }
////}

//////bool should_i_swap(pair <int, int> a, pair <int, int> b){
//////    if(a.first == b.first){
//////        if(a.second < b.second) return false;
//////        else return true;
//////    }
//////    else{
//////        if(a.first > b.first) return false;
//////        else return true;
//////    }
//////}

bool should_i_swap(pair <int, int> a, pair <int, int> b){
        if(a.first != b.first){
            return a.first > b.first;
        }
        else{
           return a.second < b.second;
        }
}

int main(){

    int n = 4;

    vector < pair<int, int> > a = { {10, 3}, {7, 5}, {5, 4}, {7, 6} };

//    for(int i=0; i<n; i++){
//        for(int j=i+1; j<n; j++){
//            if(should_i_swap(a[i], a[j])){
//                swap(a[i], a[j]);
//            }
//        }
//    }

    sort(a.begin(), a.end(), should_i_swap);

    for(int i=0; i<n; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }

}
