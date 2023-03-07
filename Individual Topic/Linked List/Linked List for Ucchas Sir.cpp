#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *head = (struct node *)malloc(sizeof(struct node));
struct node *latest = (struct node *)malloc(sizeof(struct node));

void insertToList(int x){

    if(head->data == NULL){
        head->data = x;
        head->link = NULL;
        latest = head;
    }
    else{
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->link = NULL;

        latest->link = newnode;
        latest = newnode;
    }
}

void display(){
    struct node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout << endl;
}

void update(int x, int y){
    struct node *temp = head;

    while(temp != NULL){
        if(temp->data == x){
            temp->data = y;
            break;
        }
        temp = temp->link;
    }
}

void Delete(int x){
    struct node *temp = head;
    struct node *prev = head;

    while(temp != NULL){
        if(temp->data == x){
            prev->link = temp->link;
        }
        prev = temp;
        temp = temp->link;
    }
}

int main(){

    head->data = NULL;

    insertToList(3);
    insertToList(5);
    insertToList(7);
    insertToList(9);

    display();

    update(7, 11);
    display();

    Delete(5);
    display();

}
