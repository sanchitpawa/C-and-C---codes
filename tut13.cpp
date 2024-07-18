#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Queue.cpp"
using namespace std;
struct node *root=NULL;
node *pretotree(int a[],int n){
    root->lchild=root->rchild=NULL;
    root->data=a[0];
    node *p,*t;
    int i=1;
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
int main(){
    int a[6]={12,7,10,15,14,20};
    root=pretotree(a,6);
    preorder(root);
    return 0;
}