// to find the area of circle
#include<stdio.h>
#define PI 3.14;
int main(){
    float r,a;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    a = r*r*PI;
    printf("The area of circle is %.2f", a);
    return 0;
}