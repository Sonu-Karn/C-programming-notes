// to find the area of square
#include <stdio.h>
int main(){
    int side,area;
    printf("Enter a side  of a square: ");
    scanf("%d", &side);
    area = side*side;
    printf("area of square is : %d", area);
    return 0;
}