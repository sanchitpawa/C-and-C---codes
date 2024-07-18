#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Queue.cpp"
using namespace std;
struct node*root=NULL;
struct stack{
    int size;
    int top;
    struct node **S;
};
void createstack(struct stack *st,int size){
    st->size=size;
    st->top=-1;
    st->S=new node*[st->size];
}
void push(struct stack *st,struct node *x){
    if(st->top==st->size-1){
        printf("Stack Overflow");
    }
    else{
       st->top++;
       st->S[st->top]=x;
    }
}
struct node *pop(struct stack *st){
    struct node*x=NULL;
    if(st->top==-1){
        printf("Stack Empty");
    }
    else{
        x=st->S[st->top--];
    }
    return x;
}
int isemptystack(struct stack st){
    if(st.top==-1)
        return 1;
    return 0;
}
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
void itpreorder(struct node *p){
    struct stack stk;
    createstack(&stk,100);
    while(p || !isemptystack(stk)){
        if(p){
            printf("%d ",p->data);
            push(&stk,p);
            p=p->lchild;
        }
        else{
            p=pop(&stk);
            p=p->rchild;
        }
    }
}
int main(){
    createtree();
    itpreorder(root);
    cout<<endl;
    preorder(root);
    //cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    return 0;
}