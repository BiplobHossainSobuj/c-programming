#include<stdio.h>
int main(){
    int redius;
    float pie = 3.1416;
    float area,perimeter;
    printf("Enter redius of a circle: ");
    scanf("%d",&redius);
    area = (redius*redius)*pie;
    printf("Area of a circle: %f",area);
    perimeter = 2*pie*redius;
    printf("Perimeter of a circle: %f", perimeter);
}