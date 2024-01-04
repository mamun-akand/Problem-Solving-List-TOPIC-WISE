#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //iterator can't be used in stack & queue
   
    stack <int> st;

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    st.pop();

    while( !st.empty() ){
        cout << st.top() << endl;
        st.pop();
    }

//    stack <string> st;
//
//    st.push("Akand");
//    st.push("Mamun");
//    st.push("Alizeh");
//    st.push("Mamoon");
//    st.push("Akandd");
//
//    st.pop();
//
//    while( !st.empty() ){
//        cout << st.top() << endl;
//        st.pop();
//    }

    return 0;
}
