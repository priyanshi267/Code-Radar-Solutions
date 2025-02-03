#include<stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' && ch=='e' && ch=='i' && ch=='o' && ch=='u') {
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