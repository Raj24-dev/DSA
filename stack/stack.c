#include<stdio.h>
#include<stdlib.h>
 struct stack{
    int top;
    int size;
    int * s;
 };
 void create(struct stack *st){
    printf("Enter the size: ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
 }
 void display(struct stack *st){
    int i;
    for(i=st->top;i>=0;i--){
        printf("%d ",st->s[i]);
    }
    printf("\n");
 }
 void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("Overflow\n");
    }else{
        st->top++;
        st->s[st->top]=x;
    }
 }
 int peek(struct stack * st,int index){
    int x=-1;
    if(st->top-index+1<0){
        printf("Invalid index\n");
    }
    x=st->s[st->top-index+1];
    return x;
 }
 int pop(struct stack*st){
    int x=-1;
    if(st->top==-1){
        printf("underflow");
    }else{
        x=st->s[st->top--];
    }
    return x;
 }
 int isFull(struct stack*st){
    return st->top==st->size-1;
 }
 int isEmpty(struct stack*st){
    return st->top==-1;
 }
 int stackTop(struct stack*st){
    if(!isEmpty(st)) return st->s[st->top];
    return -1;
 }

int main(){
    struct stack *st;
    st=(struct stack*)malloc(sizeof(struct stack));
    create(st);
    push(st,10);
    push(st,20);
    push(st,30);
    push(st,40);
    printf("%d \n",peek(st,2));
    display(st);
    printf("%d \n",pop(st));
    return 0;
}