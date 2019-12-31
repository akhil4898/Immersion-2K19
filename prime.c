#include<stdio.h>
int prime(int n);
int main(){
    int n;
    printf("Enter the number to check prime : ");
    scanf("%d", &n);
    prime(n);
    return 0;
}


int  prime(int n){
    int i, m = 0, flag = 0;
    for(i = 2; i <= n-1; i++){
        if(n % i == 0){
            printf("Number is not prime!\n");
            flag = 1;
            break;
        }
    
    }
    if(flag == 0){
        printf("Number is prime\n");
    }
    return 0;
}