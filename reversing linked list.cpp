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
void rev(struct node *p,int a[],int n){
    int i=0;
    struct node *first=p;
    while(p!=NULL){
        a[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL){
        p->data=a[i--];
        p=p->next;
    }
}
int main(){
    int a[5];
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
    rev(head,a,5);
    printlist(head);
    return 0;
}