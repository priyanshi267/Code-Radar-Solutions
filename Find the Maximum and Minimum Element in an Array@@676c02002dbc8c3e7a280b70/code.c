#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",arr[i]);
    } 
    int max=-1;
    for(int i=0;i<N;i++){
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    int min=arr[0];
    for(int i=0;i<N;i++) {
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}