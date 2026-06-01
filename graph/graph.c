#include<stdio.h>
#include "queue.h"
void BFS(int g[7][7], int start, int n){
    int i, visited[7]={0};
    printf("%d ",start);
    visited[start] = 1;
    enqueue(start);     
    while(!isEmpty()){
        int curr = dequeue();
        for(i=0; i<n; i++){
            if(g[curr][i] == 1 && visited[i] == 0){
                printf("%d ",i);
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}
int main(){
    int g[7][7]={0,0,0,0,0,0,0,
                 0,0,1,1,1,0,0,
                 0,1,0,1,0,1,0,
                 0,1,1,0,1,1,0,
                 0,1,0,1,0,1,0,
                 0,0,1,1,1,0,1,
                 0,0,0,0,0,1,0};
    BFS(g, 1, 7);
    return 0;
}