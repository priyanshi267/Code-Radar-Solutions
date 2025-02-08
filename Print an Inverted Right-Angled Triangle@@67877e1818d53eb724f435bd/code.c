#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i=i-1) {
        for(int j=i;j>=1;j=j-1) {
            printf("* \n");
        }
    }
    printf("\n");
    return 0;
}