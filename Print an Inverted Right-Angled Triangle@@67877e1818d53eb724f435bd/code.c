#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i=i-1) {
        printf("*");
    }
    printf("\n");
    return 0;
}