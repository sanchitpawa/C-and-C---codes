#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}
*top=NULL;
void push(int x){
    struct node *t=new struct node;
    if(t==NULL){
        printf("Stack Overflow");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
void pop(){
    struct node *t=new struct node;
    int y,u;
    t=top;
    if(t==NULL){
        printf("Stack Empty");
        u=1;
    }
    else{
        y=t->data;
        top=top->next;
        u=0;
        free(t);
    }
    if(u==0){
        printf("%d ",y);
    }
}
void display(){
    struct node *p=new struct node;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    cout<<endl;
    pop();
    return 0;
}