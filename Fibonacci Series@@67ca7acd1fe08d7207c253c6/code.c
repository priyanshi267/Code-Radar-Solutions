#include<stdio.h>

int fib(int n);

int main() {
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}

int fib(int n) {
    if(n==0) {
        return 0;
    }
    if(n==10) {
        return 1;
    }
    if(n<=0) {
        printf("Invalid input\n");
    }
    int fibN = fib(n-1) + fib(n-2);
    return fibN;
}