#include <bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node *link;
};

struct node *nibir = (struct node*)malloc(sizeof(struct node));
struct node *lastest = (struct node*)malloc(sizeof(struct node));

void insertTolist(int x){
      if(nibir->value == NULL){
          nibir->value = x;
          nibir->link = NULL;
          lastest = nibir;
      }
      else{
         struct node *newnode = (struct node*)malloc(sizeof(struct node));
         newnode->value = x;
         newnode->link= NULL;
         lastest->link = newnode;
         lastest = newnode;
      }
}

void display(){
     cout<<"Our list :";
     struct node *temp = nibir;
     while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->link;
     }
}
void updateList(int x , int y){
     struct node *temp = nibir;
     while(temp != NULL){
        if(temp->value == x){
            temp->value = y;
            break;
        }
        temp = temp->link;
     }

}
void deleteFromList(int x){
   struct node *temp = nibir;
   struct node *previous = nibir;
     while(temp != NULL){
        if(temp->value == x){
            previous->link = temp->link;
        }
        previous = temp;
        temp = temp->link;
     }

}

int main(){
    nibir->value = NULL;
    insertTolist(5);
    insertTolist(7);
    insertTolist(2);
    insertTolist(200);
    insertTolist(273);
    display();
//    updateList(2, 20);
//    display();
    deleteFromList(200);
    display();
}
