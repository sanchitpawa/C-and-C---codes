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
void preorder(struct node *p){
    if(p){
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
void postorder(struct node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
void islevel(struct node *p){
    struct queue Q;
    create(&Q,100);
    if(p){
        printf("%d ",p->data);
        enqueue(&Q,p);
        while(!isEmpty(Q)){
            p=dequeue(&Q);
            if(p->lchild){
                printf("%d ",p->lchild->data);
                enqueue(&Q,p->lchild);
            }
            if(p->rchild){
                printf("%d ",p->rchild->data);
                enqueue(&Q,p->rchild);
            }
        }
    }
}
int main(){
    createtree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    islevel(root);
    return 0;
}