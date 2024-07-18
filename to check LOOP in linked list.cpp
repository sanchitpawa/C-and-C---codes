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
bool isloop(struct node *f){
    struct node *p;
    struct node *q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while (p && q && p!=q);
    return p==q?true:false;
    
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
    if(isloop(head)){
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}