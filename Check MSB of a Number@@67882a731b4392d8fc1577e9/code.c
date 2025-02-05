#include <stdio.h>

int main() {
    int a,msb;
    scanf("%d",&a);
    msb = 1<<(BITS-1);
    if(a & msb) {
        printf("SET");
    }
    else {
        printf("Not Set");
    }
    return 0;
}