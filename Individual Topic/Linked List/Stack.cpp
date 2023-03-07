#include <iostream>
using namespace std ;

int arr[100];
int top = 0;

void insertIntoarray(int data, int index){
      if(index == top){
        arr[index] = data ;
        top++ ;
      }
      else{

         for(int i=top-1 ; i >= index ; i--){
              arr[i+1] = arr[i];
         }

         arr[index] = data ;
         top++ ;
      }
}

void deletefromarray(int index){
    if(index == top-1){
        top -- ;
    }
    else{
       for(int i = index ; i<top ; i++){
            arr[i] = arr[i+1];
       }
        top-- ;
    }
}

void printStack(){
     for(int i=0 ; i<top; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
}

void push(int x){
   insertIntoarray(x, top);
}

void pop(){
   deletefromarray(top);
}

int main(){
    push(5);
    printStack();

    push(7);
    printStack();

    push(4);
    printStack();

    push(15);
    printStack();

    push(17);
    printStack();

    push(40);
    printStack();

//    pop();
//    pop();
//    printStack();

    deletefromarray(4);
    printStack();
}
