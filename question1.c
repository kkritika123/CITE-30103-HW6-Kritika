/* 
 * Documentation Section
 * Program: Calculates the area and perimeter of a rectangle
 *              
 */

#include <stdio.h>   // Link Section
int main(void)   // Main() Function Section
{
// Declaration part	
    double width, height;
    double area, perimeter;

    // Executable part
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);

   
    area = width * height;
    perimeter = 2 * (width + height);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}

