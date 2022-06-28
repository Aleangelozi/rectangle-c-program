#include <stdio.h>
#include <stdlib.h>

/*
*This program calculates the area and the perimeter of a given rectangle.
*/


int main()
{
    //It should create 4 variables to store the width, the height, the perimeter and the area of the rectangle.
    double width = 4.0;
    double height = 6.0;
    double perimeter;
    double area;

    //It should perform the calculation for the perimeter and for the area of the rectangle.
    perimeter = (width + height) * 2;
    area = width * height;

    printf("width: %.2lf height: %.2lf perimeter: %.2lf\n", width, height, perimeter);
    printf("width: %.2lf height: %.2lf area: %.2lf", width, height, area);
    return 0;
}
