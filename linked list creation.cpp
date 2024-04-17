#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void begin(struct node **head,int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *head;
    *head=newnode;
}
void end(struct node **head,int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct node *current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
}
void printlist(struct node *head){
    struct node *current=head;
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
}
int main(){
    struct node *head=NULL;
    begin(&head,10);
    end(&head,20);
    end(&head,30);
    end(&head,40);
    end(&head,50);
    printlist(head);
    return 0;
}