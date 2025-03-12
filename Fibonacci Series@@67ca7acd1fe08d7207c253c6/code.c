#include<stdio.h>

void fibonacciSeries(int n);

int main() {
    int n;
    scanf("%d",&n);
    if(n<=0) {
        printf("Invalid input\n");
    }
    else {
        fibonacciSeries(n);
    }
    return 0;
}

void fibonacciSeries(int n) {
    int first = 0;
    int second = 0;
    int next;
    if(n==0) {
        printf("%d",first);
    }
    if(n==1) {
        printf("%d",second);
    }
    for(int i=3; i<=n;i++) {
        next = first + second;
        printf("%d", next);
        first = second;
        second = next;
    }
    printf("\n");
}