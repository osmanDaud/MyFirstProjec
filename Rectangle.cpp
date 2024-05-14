#include <Rectangle.h>

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}
void Rectangle::setLength(float newLenght)
{
    length = newLenght;
}

void Rectangle::setWidth(float newWidth)
{
    width = newWidth;
}

float Rectangle::getLength()
{
    return length;
}

float Rectangle::getWidth()
{
    return width;
}
float Rectangle::calculateArea(float width, float length){
    return width * length;
}