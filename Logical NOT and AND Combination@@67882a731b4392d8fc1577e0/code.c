#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(!(a>0 && b>0)) {
        printf("false");
    }
    else {
        printf("True");
    }
    return 0;
}