#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node *) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *) malloc(sizeof(struct node));
    current->data = 65;
    current->link = NULL;
    head->link = current;

    current = (struct node *) malloc(sizeof(struct node));
    current->data = 75;
    head->link->link = current;


    cout << head->data << endl;
}
