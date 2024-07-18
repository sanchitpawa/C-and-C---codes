#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size){
    q->size=size;
    q->Q=new int[q->size];
    q->front=q->rear=-1;
}
void enqueue(struct queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"Queue Full";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Queue Empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct queue Q;
    create(&Q,3);
    enqueue(&Q,2);
    enqueue(&Q,5);
    enqueue(&Q,9);
    display(Q);
    cout<<dequeue(&Q);
    cout<<endl;
    display(Q);
    return 0;
}