#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Queue.cpp"
using namespace std;
struct node*root=NULL;
void createtree(){
    node *p,*t;
    int x;
    int data;
    struct queue q;
    create(&q,100);
    cout<<"Enter root value:";
    scanf("%d",&x);
    root=new struct node;
    root->data=x;
    root->lchild=root->rchild=0;
    enqueue(&q,root);
    while(!isEmpty(q)){
        p=dequeue(&q);
        printf("enter left child of %d:",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=new struct node;
            t->data=x;
            t->lchild=t->rchild=0;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("enter right child of %d:",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=new struct node;
            t->data=x;
            t->lchild=t->rchild=0;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
int count(struct node *root){
    if(root!=NULL){
        return count(root->lchild)+count(root->rchild)+1;
    }
    return 0;
}
int height(struct node *root){
    if(root==0){
        return 0;
    }
    return height(root->lchild)>height(root->rchild)?height(root->lchild)+1:height(root->rchild)+1;
}
int main(){
    createtree();
    cout<<"No. of nodes are:"<<count(root)<<endl<<"Height of the tree is:"<<height(root);
    return 0;
}