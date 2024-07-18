#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void printlist(struct node *ptr){
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
void rev(struct node *q,struct node *p){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head=p;
    if(p!=NULL){
        rev(p,p->next);
        p->next=q;
    }
    else{
        head=q;
    }
}
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));
    head->data=3;
    head->next=first;
    first->data=5;
    first->next=second;
    second->data=9;
    second->next=third;
    third->data=11;
    third->next=fourth;
    fourth->data=15;
    fourth->next=NULL;
    cout<<"Before Reverse"<<endl;
    printlist(head);
    cout<<endl<<"After Reverse"<<endl;
    rev(NULL,head);
    printlist(fourth);
    return 0;
}