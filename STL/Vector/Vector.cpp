#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> vec1 = {6, 5, 4, 3, 2, 1};
    vector <int> vec = vec1;                    // vector can assign another vector

    vector <int>::iterator it=vec1.begin();

    /// Add elements

//    vec.push_back(13);
//    vec.push_back(50);
//    vec.push_back(14);
//    vec.push_back(30);

    /// vec.insert()

        vec1.insert(it, 999);
        cout << *it << endl;

//    vec.insert(vec.begin(), -1);
//    vec.insert(vec.begin(), 5, -1);
//    vec.insert(vec.begin()+2, 2, -1);

//    vec.insert(vec.end(), -100);
//    vec.insert(vec.end()-1 , -100);


//    sort( vec.begin(), vec.begin()+3, greater<int>() );

    /// Read/print

//    cout << vec[2] << "\n";
//    cout << vec.front() << "\n";
//    cout << vec.back() << "\n";

//    for(int i:vec){
//        cout << i << " ";
//    }

//    for(int i=0 ; i < vec.size() ; i++){
//        cout << vec[i] << " ";
//    }

    ///Vector to array

//    int *x = vec.data();
//    cout << x[0] << endl;

    ///Update

//    vec[3] = 0 ;
//    cout << vec[3] << endl;

    ///Swap

//    vector <int> vec3 = {6, 5, 4, 3, 2, 1};
//    vector <int> vec4 = {-1, -2, -3, -4, -5, -6};

//    vec3.swap(vec4);

//    for(int i:vec3){
//        cout << i << " ";
//    }

//    cout << endl;

//    for(int i:vec4){
//        cout << i << " ";
//    }



//    for(it = vec.begin() ; it != vec.end() ; it++){
//        cout << *it << endl;
//    }

}
