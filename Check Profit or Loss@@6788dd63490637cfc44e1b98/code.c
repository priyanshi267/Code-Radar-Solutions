#include <stdio.h>

int main() {
    int c,s;
    scanf("%d %d",&c,&s);
    if(c<s) {
        printf("Profit");
    }
    else if(c==s) {
        printf("No Profit No Loss");
    }
    else {
        printf("Loss");
    }
    return 0;
}