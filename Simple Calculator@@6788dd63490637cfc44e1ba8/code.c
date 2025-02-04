#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char d;
    scanf("%c",&d);
    if(d=='+') {
        int c=a+b;
        printf("%d",c);
    }
    else if(d=='-') {
        int c=a-b;
        printf("%d",c);
    }
    else if(d=='*') {
        int c=a*b;
        printf("%d",c);
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