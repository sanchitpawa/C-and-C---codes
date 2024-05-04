#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void printlist(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node *begining(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node *middle(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while (i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    fourth=(struct node*) malloc(sizeof(struct node));
    head->data=12;
    head->next=second;
    second->data=13;
    second->next=third;
    third->data=24;
    third->next=fourth;
    fourth->data=21;
    fourth->next=NULL;
    printlist(head);
    printf("\n");
    head=middle(head,28,2);
    printlist(head);
    return 0;
}