#include<stdio.h>
#include<stdlib.h>
#include <string.h>
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
int pre (char x){
    if(x=='+'|| x=='-')return 1;
    else if(x=='*'|| x=='/')return 2;
    return  0;
}
int isoperand(char x){
   if(x=='+'|| x=='-' || x=='*'|| x=='/'){
      return 0;
   }
   else return 1;
}
char* inftoPost(char* infix){
     char *postfix;
     int i=0,j=0;
     struct stack *st;
     create(st, 100);
     int len = strlen(infix);
     postfix=(char*)malloc((len+1)*sizeof(char));
     
     while(infix[i]!='\0'){
      if(isoperand(infix[i]))postfix[j++]=infix[i++];
 else{
   if(pre(infix[i])>pre(st->s[st->top])){
        push(st,infix[i++]);
   }
   else{
      postfix[j++]=pop(st);
   }
 }
 
}
while(st->top!=-1){
   postfix[j++]=pop(st);
}
postfix[j]='\0';
return postfix;
}
int main(){
   char *infix="a+b-c";
   char * postfix;
   //printf("%d \n",isBalanced(exp));
   printf("%s ",inftoPost(infix));
    return 0; 
}