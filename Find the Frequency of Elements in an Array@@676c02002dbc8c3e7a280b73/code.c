#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count[N];
    for(int i=0;i<N;i++){
        scanf("%d",&count[i]);
        count[i]=0;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count[i]++;
                count[j]=-1;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (count[i] != -1) {
            printf("%d %d\n", arr[i], count[i] + 1); // +1 to include the first occurrence
        }
    }
    return 0;
}