#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle1;
    float newWidth, newLength;

    cout << "enter the radius and width valus seperated by a space: \n";
    cin >> newLength >> newWidth;

    rectangle1.setWidth(newWidth);
    rectangle1.setLength(newWidth);

    cout << "The area of a rectangle of radius " << newLength << " and width " << newWidth << " is: " << rectangle1.calculateArea(newLength, newWidth) << endl;
}
