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
    q->front=q->rear=0;
}
void enqueue(struct queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue Full";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Queue Empty";
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q){
    int i=q.front+1;
    do
    {
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.size;
    } while (i!=(q.rear+1)%q.size);
    cout<<endl;
}
int main(){
    struct queue Q;
    create(&Q,4);
    enqueue(&Q,2);
    enqueue(&Q,5);
    enqueue(&Q,9);
    display(Q);
    cout<<dequeue(&Q);
    cout<<endl;
    display(Q);
    enqueue(&Q,7);
    display(Q);
    return 0;
}