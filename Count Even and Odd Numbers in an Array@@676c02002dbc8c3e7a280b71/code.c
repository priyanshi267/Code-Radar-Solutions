#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int countE =0,countO=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            countE++;
        }
        else {
            countO++;
        }
    }
    printf("%d %d",countE,countO);
    return 0;
}