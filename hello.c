#include <stdio.h>
int main(){
    int num1;
    printf("Enter your hex num: ");
    scanf("%x", &num1);
    printf(" Your decimal num is: %d \n", num1);
    printf(" Your oct num is: %o \n", num1);

    int num2;
    printf("Enter your dec num: ");
    scanf("%d", &num2);
    printf("Your hex num is: %x \n", num2);
    printf("Your oct num is: %o \n", num2);

    int num3;
    printf("Enter your oct num: ");
    scanf("%o", &num2);
    printf("Your dec num is: %d \n", num2);
    printf("Your hex num is: %x \n", num2);
    return 0;
}