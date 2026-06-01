#include<stdio.h>
#include<stdlib.h>
 struct stack{
    int top;
    int size;
    char * s;
 };
 void create(struct stack *st,int size){
    st->size=size;
    st->top=-1;
    st->s=(char*)malloc(st->size*sizeof(char));
 }
 void display(struct stack *st){
    int i;
    for(i=st->top;i>=0;i--){
        printf("%d ",st->s[i]);
    }
    printf("\n");
 }
 void push(struct stack *st,char x){
    if(st->top==st->size-1){
        printf("Overflow\n");
    }else{
        st->top++;
        st->s[st->top]=x;
    }
 }
 char peek(struct stack * st,char index){
    char x=-1;
    if(st->top-index+1<0){
        printf("Invalid index\n");
    }
    x=st->s[st->top-index+1];
    return x;
 }
 char pop(struct stack*st){
    char x=-1;
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
int isBalanced(char* exp){
 int i;

 struct stack st;
 create(&st,100);


 for(i=0;exp[i]!='\0';i++){
    if(exp[i]=='('){
        push(&st,exp[i]);
    }else if(exp[i]==')'){
        if(isEmpty(&st))
        return 0;

        pop(&st);
    }
    
 }
 return isEmpty(&st);
}
int main(){
   char *exp="((a+b)*(c-d))";
   printf("%d \n",isBalanced(exp));
   
    return 0;
}