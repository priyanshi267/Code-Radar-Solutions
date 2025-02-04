#include <stdio.h>

int main() {
    char a[100],c[100];
    int b;
    scanf("%s %s %d",&a,&c,&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",&b);
    printf("Hobby: %s",&c);
    return 0;
}