#include <stdio.h>
#define BITS sizeof(int) * 8 

int main() {
    int a,msb;
    scanf("%d",&a);
    msb = 1<<(BITS-1);
    if(a & msb) {
        printf("Set");
    }
    else {
        printf("Not Set");
    }
    return 0;
}