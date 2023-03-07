#include <iostream>
using namespace std ;

int arr[100] ;
int top = 0 ;

void insertIntoarray(int data , int index){
      if(index == top){
        arr[index] = data ;
        top++ ;
      }
      else{
         for(int i =top-1 ; i >= index ; i--){
              arr[i+1] = arr[i];
         }
         arr[index] = data ;
         top++ ;

      }
}
void deletefromarray(int index){
    if(index == top -1 ){
        top -- ;
    }
    else{
       for(int i = index ; i<top ; i++){
            arr[i-1] = arr[i];
       }
              top -- ;


    }
}
void printQueue(){
     for(int i=0 ; i<top; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void push(int x){
   insertIntoarray(x , top);

}
void pop(){
   deletefromarray(0);
}
int main(){
    push(5);
    printQueue();
    push(7);
    printQueue();
    push(4);
    printQueue();
    push(15);
    printQueue();
    push(17);
    printQueue();
    push(40);
    printQueue();
    pop();
    pop();
    printQueue();





}
