struct stack{
    int size;
    int *top;
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
struct node *pop(struct stack *t){
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