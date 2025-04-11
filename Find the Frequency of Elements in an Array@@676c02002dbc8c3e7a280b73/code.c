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
        count[i]=0;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count[i]++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", arr[i], count[i] + 1); // +1 to include the first occurrence
            count[i] = -1; // Mark as already counted to avoid duplicates in output
        }
    }
    return 0;
}