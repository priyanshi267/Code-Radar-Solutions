#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c",&c);
    if(c=='+') {
        printf("%d",a+b);
    }
    else if(c=='-') {
        printf("%d",a-b);
    }
    else if(c=='*') {
        printf("%d",a*b);
    }
    else if(c=='/') {
        printf("%d",a/b);
    }
    else {
        printf("error");
    }
    return 0;
}