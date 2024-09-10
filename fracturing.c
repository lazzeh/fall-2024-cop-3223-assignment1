#include <stdio.h>

#include <math.h>
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// Main function 
int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0; 
}


//  DRY method function for user input, im trying to strictly folllow document and i dont see anything talking about the text prompt for the user so idk i didnt ass one. 
double askForUserInput() 
{
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}


// Function to calculate the distance between the given points 
double calculateDistance() 
{
    double x1, y1, x2, y2;

    printf("Enter coordinates for Point 1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter coordinates for Point 2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Distance calculation little help from google 
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance; 
}


// Function to calculate the perimeter using our distance calc function
// Grades for difficulty of
double calculatePerimeter() 
{
    double distance = calculateDistance();
    double perimeter = PI * distance; 

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 4.0; 
}


// Function to calculate the area of the circle   π * r^2= circle
double calculateArea() 
{
    double distance = calculateDistance();
    double area = PI * pow(distance / 2, 2); 

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2.0; 
}


// Function to calculate the width of the circle (diameter)
double calculateWidth() 
{
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.2f\n", distance);

    return 1.0; 
}


// Function to calculate the height of the circle (diameter)
double calculateHeight() 
{
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %.2f\n", distance);

    return 1.0; 
}