#include<stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a') {
        printf("Vowel");
    }
    else if(ch == '5') {
        printf("Digit");
    }
    else if(ch =='@') {
        printf("Special Character");
    }
    else {
        printf("Consonant");
    }
    return 0;
}