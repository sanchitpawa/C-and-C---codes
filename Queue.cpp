struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct queue{
    int size;
    int front;
    int rear;
    node **Q;
};
void create(struct queue *q,int size){
    q->size=size;
    q->Q=new node*[q->size];
    q->front=q->rear=0;
}
void enqueue(struct queue *q,node *x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue Full");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
node *dequeue(struct queue *q){
    node *x=NULL;
    if(q->rear==q->front){
        printf("Queue Empty");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int isEmpty(struct queue q){
    return q.front==q.rear;
}