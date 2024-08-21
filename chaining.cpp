#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//#include "chaining.h"
using namespace std;
struct node{
    int data;
    struct node *next;
};
void sortedinsert(struct node **h,int data){
    struct node *t,*q=NULL,*p=*h;
    t=new struct node;
    t->data=data;
    t->next=NULL;
    if(*h==NULL){
        *h=t;
    }
    else{
        while(p && p->data<data){
            q=p;
            p=p->next;
        }
        if(p==*h){
            t->next=*h;
            *h=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
struct node *search(struct node *p,int key){
    while(p!=NULL){
        if(p->data==key)
        return p;
        p=p->next;
    }
}
int bash(int key){
    return key%10;
}
void insert(struct node *h[],int key){
    int index=bash(key);
    sortedinsert(&h[index],key);
}
int main(){
    struct node *ht[10];
    struct node *temp;
    int i;
    for (i;i<10;i++){
        ht[i]=NULL;
    }
    insert(ht,12);
    insert(ht,22);
    insert(ht,32);
    insert(ht,42);

    temp=search(ht[bash(22)],22);
    cout<<temp->data;
    return 0;
}