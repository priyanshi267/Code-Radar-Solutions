#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    int min=arr[0];
    for(int i=0;i<n;i++) {
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}