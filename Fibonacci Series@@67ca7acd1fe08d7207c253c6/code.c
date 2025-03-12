#include<stdio.h>

void fibonacciSeries(int n);

int main() {
    int n;
    scanf("%d",&n);
    fibonacciSeries(n);
    return 0;
}

void fibonacciSeries(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    if(n<=0) {
        printf("Invalid input\n");
    }
    int fibonacciSeriesN = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    printf("%d", fibonacciSeriesN);
    return fibonacciSeriesN;
}