#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct node{
    char data;
    struct node *next;
}*top=NULL;
void push(char x){
    struct node *t=new struct node;
    if(t==NULL){
        cout<<"Stack Overflow";
    }
    else{
        t->next=top;
        t->data=x;
        top=t;
    }
}
char pop(){
    struct node *t=new struct node;
    char x=-1;
    if(top==NULL){
        cout<<"Stack Underflow";
    }
    else{
        t=top;
        x=t->data;
        top=top->next;
        free(t);
    }
    return x;
}
void display(struct node *t){
    t=top;
    while(t!=NULL){
        cout<<t->data;
        t=t->next;
    }
    cout<<endl;
}
int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='/' || x=='*'){
        return 2;
    }
}
int operand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}
char *post(char *inf){
    int i=0,j=0;
    int len=strlen(inf);
    char *post=(char *)malloc((len+2));
    while(inf[i]!='\0'){
        if(operand(inf[i])){
            post[j++]=inf[i++];
        }
        else{
            if(pre(inf[i])>pre(top->data)){
                push(inf[i++]);
            }
            else{
                post[j++]=pop();
            }
        }
    }
    while(top!=NULL){
        post[j++]=pop();
    }
    post[j]='\0';
    return post;
}
int Eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0 ;

    for(i=0;postfix[i]!='\0';i++)
    {
        if(operand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            x2=pop();x1=pop();
            switch(postfix[i])
            {
                case '+':r=x1+x2; break;
                case '-':r=x1-x2; break;
                case '*':r=x1*x2; break;
                case '/':r=x1/x2; break;
            }
            push(r);
        }
    }
    return top->data;
}
int main(){
    char *infix="a+b-c/d-e";
    push('#');
    char *postfix=post(infix);
    printf("%s ",postfix);
    cout<<endl;
    char *postfix1="234*+82/-";
    printf("Result is %d\n",Eval(postfix1));
    return 0;
}