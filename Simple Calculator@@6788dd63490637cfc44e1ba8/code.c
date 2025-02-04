#include <stdio.h>

int main() {
    int a,b,c;
    char d;
    scanf("%d %d %d %c",&a,&b,&c,&d);
    if(d=='+') {
        c=a+b;
        printf("%d",c);
    }
    else if(d=='-') {
        c=a-b;
        printf("%d",c);
    }
    else if(d=='*') {
        c=a*b;
        printf("%d",c);
    }
    else if(d=='/') {
        if(b!=0) {
            c=a/b;
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