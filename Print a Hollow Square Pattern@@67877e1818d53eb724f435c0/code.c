#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        for(int j=i;j<=N;j++) {
            if((i+j)==N+1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
    }
    return 0;
}