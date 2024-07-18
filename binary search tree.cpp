#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Queue.cpp"
using namespace std;
struct node*root=NULL;
void createbintree(){
    node *p,*t,*m;
    int x;
    int data;
    struct queue q;
    create(&q,100);
    cout<<"Enter root value:";
    scanf("%d",&x);
    root=new struct node;
    root->data=x;
    root->lchild=root->rchild=0;
    while(x!=69){
        printf("Enter next value:");
        scanf("%d",&x);
        if(x!=69){
            t=new struct node;
            t->data=x;
            t->lchild=t->rchild=0;
            m=p=root;
            while(p!=NULL){
                m=p;
                if(x>p->data){
                    p=p->rchild;
                }
                else{
                    p=p->lchild;
                }
            }
            if(m->data<x){
                m->rchild=t;
            }
            else{
                m->lchild=t;
            }
        }
    }
}
node *rsearch(struct node *root,int key){
    if(root==NULL){
        return 0;
    }
    else{
        if(root->data==key){
            return root;
        }
        else if(root->data<key){
            return rsearch(root->rchild,key);
        }
        else{
            return rsearch(root->lchild,key);
        }
    }
}
node *isearch(struct node *root,int key){
    if(root==NULL){
        return 0;
    }
    else{
        while(root!=NULL){
            if(root->data==key){
                return root;
            }
            else if(root->data<key){
                root=root->rchild;
            }
            else{
                root=root->lchild;
            }
        }
        return NULL;
    }
}
void insert(struct node *t,int key){
    struct node *r=NULL;
    while (t!=NULL){
        r=t;
        if(t->data==key){
            return;
        }
        else if(t->data<key){
            t=t->rchild;
        }
        else{
            t=t->lchild;
        }
    }
    struct node*p=(struct node *)malloc(sizeof(struct node));
    p->lchild=p->rchild=NULL;
    p->data=key;
    if(r->data<key){
        r->lchild=p;
    }
    else{
        r->rchild=p;
    }
}
node *rinsert(struct node *p,int key){
    node *t;
    if(p==NULL){
        t=(struct node *)malloc(sizeof(struct node));
        t->lchild=t->rchild=NULL;
        t->data=key;
        return t;
    }
    else if(p->data<key){
        p->rchild=rinsert(p->rchild,key);
    }
    else{
        p->lchild=rinsert(p->lchild,key);
    }
    return p;
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
void preorder(struct node *p){
    if(p){
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int height(struct node *p){
    int x,y;
    if(p==NULL){
        return 0;
    }
    else{
        x=height(p->lchild);
        y=height(p->rchild);
        return x>y?x+1:y+1;
    }
}
node *inpre(struct node *p){
    while(p && p->rchild!=NULL){
        p=p->rchild;
    }
    return p;
}
node *insucc(struct node *p){
    while(p && p->lchild!=NULL){
        p=p->lchild;
    }
    return p;
}
node *del(struct node *p,int key){
    node *q;
    if(p==NULL){
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL){
        if(p==root){
            root=NULL;
        }
        free(p);
        return NULL;
    }
    if(p->data<key){
        p->rchild=del(p->rchild,key);
    }
    else if(p->data>key){
        p->lchild=del(p->lchild,key);
    }
    else{
        if(height(p->lchild)>height(p->rchild)){
            q=inpre(p->lchild);
            p->data=q->data;
            p->lchild=del(p->lchild,q->data);
        }
        else{
            q=insucc(p->rchild);
            p->data=q->data;
            p->rchild=del(p->rchild,q->data);
        }
    }
    return p;
}
int main(){
    createbintree();
    //cout<<rsearch(root,40);
    rinsert(root,38);
    islevel(root);
    cout<<endl;
    del(root,30);
    islevel(root);
}