// How to add the number by asking from the user.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a first number: ");
    scanf("%d", &a);
    printf("Enter a second number: ");
    scanf("%d", &b);
    c = a+b;
    printf("The sum of the numbers is %d", c);
    return 0;
}