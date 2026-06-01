#include<stdio.h>
#include<unistd.h>

int main(){
    int n;
    printf("Enter the no. of times you want to wish: ");
    scanf("%d", &n);
    for(int i =  0; i<n; i++){
        printf("Happy Chhath puja! \n");
        sleep(1);
    }
    return 0;
}