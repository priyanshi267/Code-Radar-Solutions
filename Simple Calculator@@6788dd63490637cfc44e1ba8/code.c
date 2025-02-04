#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d %d %c",&a,&b,&d);
    if(d=='+') {
        int p=a+b;
        printf("%d",p);
    }
    else if(d=='-') {
        int g=a-b;
        printf("%d",g);
    }
    else if(d=='*') {
        int j=a*b;
        printf("%d",j);
    }
    else if(d=='/') {
        if(b!=0) {
            int c=a/b;
            printf("%d",c);
        }
        else {
            printf("error");
        }
    }
    else {
        printf("error");
    }
    return 0;
}