#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=0;i<=10;i++) {
        printf("%d * %d = %d",N,i,N*i);
    }
    return 0;
}