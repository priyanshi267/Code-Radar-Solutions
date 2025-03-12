#include<stdio.h>

void fibonacciSeries(int n);

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
    } else {
        fibonacciSeries(n);
    }
    
    return 0;
}

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    
    // Printing the first two numbers of the Fibonacci series
    if (n >= 1) {
        printf("%d ", first); // print 0
    }
    
    if (n >= 2) {
        printf("%d ", second); // print 1
    }

    // Printing the rest of the Fibonacci series
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        
        first = second;
        second = next;
    }
    printf("\n");
}
