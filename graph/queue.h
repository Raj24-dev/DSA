#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*front=NULL, *rear=NULL;

void enqueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
   if(temp==NULL){
    printf("Queue is full\n");
    return;
   }
   else {
    temp->data = x;
    temp->next = NULL;
    if(front==NULL) front=rear=temp;
    else {
        rear->next = temp;
        rear = temp;
    }
   }
}
int dequeue(){
    if(front==NULL){
        printf("Queue is empty\n");
        return -1;
    }
    else {
        struct Node* temp = front;
        int x = temp->data;
        front = front->next;
        free(temp);
        return x;
    }
}
int isEmpty(){
    return front==NULL;
}
#endif