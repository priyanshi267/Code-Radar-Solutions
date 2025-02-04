#include <stdio.h>

int main() {
    char a[100],c[100];
    scanf("%s %s",&a,&c);
    int b;
    scanf("%d",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",&b);
    printf("Hobby: %s",&c);
    return 0;
}