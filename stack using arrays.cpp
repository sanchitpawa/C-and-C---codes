#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct stack{
    int size;
    int top;
    int *s;
};
void create(struct stack *st){
    printf("Enter size:");
    cin>>st->size;
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}
void display(struct stack st){
    int i;
    for(i=st.top;i>=0;i--){
        printf("%d ",st.s[i]);
    }
    printf("\n");
}
void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("Stack Overflow");
    }
    else{
        // printf("Enter the value to be pushed:");
        // cin>>x;
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack *st){
    if(st->top==-1){
        printf("Stack Underflow");
    }
    else{
        int x;
        return st->s[st->top];
        st->top--;
    }
}
void peek(struct stack st,int p){
    if((st.top-p+1)<0){
        cout<<"Invalid position";
    }
    else{
        int y=st.s[st.top-p+1];
        cout<<y;
    }
}
void isEmpty(struct stack st){
    if(st.top==-1){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack not empty";
    }
}
void isFull(struct stack st){
    if(st.top==st.size-1){
        cout<<"Stack is full";
    }
    else{
        "Stack not full";
    }
}
void stackTop(struct stack st){
    if(st.top!=-1){
        cout<<st.s[st.top];
    }
}

int main(){
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    display(st);
    cout<<pop(&st)<<endl;
    isEmpty(st);
    cout<<endl;
    peek(st,4);
    cout<<endl;
    isFull(st);
    cout<<endl;
    stackTop(st);
    cout<<endl;
    return 0;
}