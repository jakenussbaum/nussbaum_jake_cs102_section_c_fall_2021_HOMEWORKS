#include <stdio.h>

int main()
{
    float height, width, perimeter;
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter width: ");
    scanf("%f", &width);
    perimeter = (2*height)+(2*width);
    printf("Perimeter of rectangle = %f ", perimeter);

    return 0;
}
