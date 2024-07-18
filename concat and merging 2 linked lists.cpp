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
void concat(struct node *p,struct node *q){
    struct node *r=(struct node *)malloc(sizeof(struct node));
    while(p!=NULL){
        r=p;
        p=p->next;
    }
    r->next=q;
}
struct node *merge(struct node *p,struct node *q){
    struct node *third=(struct node *)malloc(sizeof(struct node));
    
    //Using C++ method of assignment in heap memory
    struct node *last=new struct node;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
    }
    else{
        last->next=q;
    }
    return third;
}
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));
    struct node *head1=(struct node *)malloc(sizeof(struct node));
    struct node *first1=(struct node *)malloc(sizeof(struct node));
    struct node *second1=(struct node *)malloc(sizeof(struct node));
    struct node *third1=(struct node *)malloc(sizeof(struct node));
    struct node *fourth1=(struct node *)malloc(sizeof(struct node));
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
    head1->data=4;
    head1->next=first1;
    first1->data=7;
    first1->next=second1;
    second1->data=10;
    second1->next=third1;
    third1->data=14;
    third1->next=fourth1;
    fourth1->data=20;
    fourth1->next=NULL;
    //concat(head,head1);
    head=merge(head,head1);
    printlist(head);
    return 0;
}