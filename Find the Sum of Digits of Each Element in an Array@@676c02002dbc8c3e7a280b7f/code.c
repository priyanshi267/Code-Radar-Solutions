#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,sum = 0;
    for(int i=0;i<n;i++){
        a=arr[i]%10;
        sum = sum + a;
        arr[i]=arr[i]/10;
    }
    printf("%d",sum);
    return 0;
}