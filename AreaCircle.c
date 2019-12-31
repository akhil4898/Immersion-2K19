// Write a progarm to calculate the area of circle.

#include <stdio.h>

int main(){
    int radius;
    float area;
    printf("Enter the value of radius to find area of circle : ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("The area of circle is : %f \n", area);
    return 0;
}