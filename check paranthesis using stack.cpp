#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct stack{
    int size;
    int top;
    int *s;
};
void push(struct stack *st,int x){
    st->top++;
    st->s[st->top]=x;
}
char pop(struct stack *st){
    int u=st->s[st->top];
    st->top--;
    return u;
}
int check(char exp[]){
    struct stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.s=new int[st.size];
    int i=0,y;
    for(i;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(&st,1);
        }
        else if(exp[i]=='['){
            push(&st,2);
        }
        else if(exp[i]=='{'){
            push(&st,3);
        }
        else if(exp[i]==')'){
            y=pop(&st);
            if(y!=1){
                cout<<"Test Failed";
                return 0;
            }
        }
        else if(exp[i]==']'){
            y=pop(&st);
            if(y!=2){
                cout<<"Test Failed";
                return 0;
            }
        }
        else if(exp[i]=='}'){
            y=pop(&st);
            if(y!=3){
                cout<<"Test Failed";
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    char a[]="[{d+(a+b)*c}+e]";
    int q=check(a);
    if(q==1){
        printf("Test success");
    }
    return 0;
}