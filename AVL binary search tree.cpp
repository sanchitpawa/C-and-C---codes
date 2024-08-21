#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node {
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
}*root=NULL;
int NodeHeight(struct node *p){
    int hl,hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl>hr?hl+1:hr+1;
}
int BalanceFactor(struct node *p){
    int hl,hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl-hr;
}
node *LLRotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);

    if(root==p){
        root=pl;
    }
    return pl;
}
node *LRRotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;

    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    if (root==p) root=plr;

    return plr;
}
node *RRRotation(struct node *p){
    struct node *pr=p->rchild;
    struct node *prl=pr->lchild;

    pr->lchild=p;
    p->rchild=prl;

    p->height=NodeHeight(p);
    pr->height=NodeHeight(pr);

    if(root==p) root=pr;

    return pr;
}
node *RLRotation(struct node *p){
    struct node *pr=p->rchild;
    struct node *prl=pr->lchild;

    p->rchild=prl->lchild;
    pr->rchild=prl->rchild;

    prl->rchild=pr;
    prl->lchild=p;

    p->height=NodeHeight(p);
    prl->height=NodeHeight(prl);

    if(root==p) root=prl;

    return prl;
}
node *rinsert(struct node *p,int key){
    node *t;
    if(p==NULL){
        t=(struct node *)malloc(sizeof(struct node));
        t->lchild=t->rchild=NULL;
        t->data=key;
        t->height=1;
        return t;
    }
    else if(p->data<key){
        p->rchild=rinsert(p->rchild,key);
    }
    else{
        p->lchild=rinsert(p->lchild,key);
    }
    p->height=NodeHeight(p);
    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1){
        return LLRotation(p);
    }
    else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1){
        return LRRotation(p);
    }
    else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==-1){
        return RRRotation(p);
    }
    else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==1){
        return RLRotation(p);
    }

    return p;
}
int main(){
    root=rinsert(root,10);
    rinsert(root,5);
    rinsert(root,2);
    return 0;
}