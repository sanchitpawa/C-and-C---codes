#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*rear=NULL,*front=NULL,;

void enqueue(int x){
    struct node *t;
    t=new struct node;
    if(t==NULL){
        cout<<"Queue Full";
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    int x=-1;
    struct node *t=new struct node;
    if(front==NULL){
        cout<<"Queue Empty";
    }
    else{
        t=front;
        x=t->data;
        front=front->next;
        free(t);
    }
    return x;
}

void display(){
    struct node *t=front;
        while(t!=NULL){
            cout<<t->data<<" ";
            t=t->next;
        }
    cout<<endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    cout<<dequeue();
    return 0;
}