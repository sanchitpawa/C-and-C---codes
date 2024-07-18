#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void printlist(struct node *ptr){
    while(ptr!=NULL){
        printf("%d <-> ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head=new struct node;
    struct node *first=new struct node;
    struct node *second=new struct node;
    struct node *third=new struct node;
    struct node *fourth=new struct node;
    struct node *fifth=new struct node;
    head->prev=NULL;
    head->data=2;
    head->next=first;
    first->prev=head;
    first->data=4;
    first->next=second;
    second->prev=first;
    second->data=6;
    second->next=third;
    third->prev=second;
    third->data=7;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=12;
    fourth->next=fifth;
    fifth->prev=fourth;
    fifth->data=16;
    fifth->next=NULL;
    printlist(head);
    return 0;
}