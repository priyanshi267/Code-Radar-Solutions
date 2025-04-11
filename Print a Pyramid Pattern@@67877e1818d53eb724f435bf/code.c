#include<stdio.h>
int main(){
    int N:
    int nst = 1;
    scanf("%d",&N);
    for(int i=1;i<N+1;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int k=1;k<nst+1;k++){
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}