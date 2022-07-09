#include<bits/stdc++.h>
using namespace std;

int main(){

   vector <string> planets = {"Earth", "Mars", "Neptune", "Jupiter"};

//   //using loop
//   for(int i=0; i<planets.size(); i++){
//        cout << planets[i] << " ";
//   }
//
//   cout << "\n";
//
//   //iterator short form.
//   for(string v : planets){
//        cout << v << " ";
//   }
//    cout << "\n";
//
//    //iterator short form using auto.
//
//   for(auto &v : planets){
//        cout << v << " ";
//   }
//
//    cout << "\n";

   //reverse iterator short form with auto. auto use korle iterator declare korte hoy na.

    for(auto it=planets.rbegin(); it != planets.rend(); it++){
        cout << *it << " ";
    }

    cout << "\n";

   //using iterator full form.

//   vector <string>::iterator it;
//
//   for(it=planets.begin(); it != planets.end(); it++){
//        cout << *it << " ";
//   }

   return 0;

}
