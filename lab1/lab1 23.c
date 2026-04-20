#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float length, breadth, radius;
    float a, b, c, s, area, perimeter;

    printf("Select a shape:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter breadth: ");
            scanf("%f", &breadth);
            area = length * breadth;
            perimeter = 2 * (length + breadth);
            printf("Area of Rectangle = %.2f\n", area);
            printf("Perimeter of Rectangle = %.2f\n", perimeter);
            break;
        case 2:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            perimeter = 2 * 3.14 * radius;
            printf("Area of Circle = %.2f\n", area);
            printf("Circumference of Circle = %.2f\n", perimeter);
            break;
        case 3:
            printf("Enter first side: ");
            scanf("%f", &a);
            printf("Enter second side: ");
            scanf("%f", &b);
            printf("Enter third side: ");
            scanf("%f", &c);
            perimeter = a + b + c;
            s = perimeter / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Area of Triangle = %.2f\n", area);
            printf("Perimeter of Triangle = %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}