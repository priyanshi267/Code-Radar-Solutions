#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if(n>='A' && n<='Z') {
        printf("Uppercase");
    }
    else if(n>='a' && n<='z') {
        printf("Lowercase");
    }
    else {
        break;
    }
    return 0;
}