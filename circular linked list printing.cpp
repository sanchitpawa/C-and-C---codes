#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

//Using do-while loop
void printlist(struct node *p){
    struct node *q=p;
    do{
        printf("%d  ",p->data);
        p=p->next;
    } while (p!=q);
}

//Using recursion
void disp(struct node *p){
    static struct node *q=p;
    static int flag=0;
    if(p!=q || flag==0){
        flag=1;
        printf("%d  ",p->data);
        disp(p->next);
    }
    flag=0;
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
    fourth->next=head;
    disp(head);
    return 0;
}