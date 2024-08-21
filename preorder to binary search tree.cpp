#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Queue.cpp"
#include "Stack.cpp"
using namespace std;
struct node *root=NULL;
node *pretotree(int a[],int n){
    int i=0;
    root=new node;
    root->data=a[i++];
    root->lchild=root->rchild=NULL;
    node *t,*p=root;
    //stack stk;
    while(i<n){
        p=t=root;
        while(p!=NULL){
            if(p->data<a[i]){
                t=p;
                p=p->rchild;
            }
            else{
                t=p;
                p=p->lchild;
            }
        }
        struct node *p=(struct node *)malloc(sizeof(struct node));
        p->lchild=p->rchild=NULL;
        p->data=a[i];
        if(t->data<a[i]){
            t->rchild=p;
        }
        else{
            t->lchild=p;
        }
        i++;
    }
    return root;
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
int main(){
    int a[6]={12,7,10,15,14,20};
    root=pretotree(a,6);
    preorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}