//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size){
    q->size=size;
    q->Q=(int *)malloc(q->size*sizeof(int));
    q->front=q->rear=-1;
}
void enqueue(struct queue *q,int x){
    if(q->rear==q->size-1){
        //cout<<"Queue Full";
        printf("Queue Full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->rear==q->front){
        //cout<<"Queue Empty";
        printf("Queue Empty");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        printf("%d",q.Q[i]);
    }
    printf("\n");
}
int main(){
    struct queue Q;
    create(&Q,3);
    enqueue(&Q,2);
    enqueue(&Q,5);
    enqueue(&Q,9);
    display(Q);
    printf("%d\n",dequeue(&Q));
    display(Q);
    return 0;
}