#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    int sum = a+b+c;
    float average = sum/3;
    printf("Average: %.2f",average);
    return 0;
}