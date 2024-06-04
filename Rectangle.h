#pragma once
#include <string>

class Rectangle
{
private:
  string length;
    float width;

public:
    Rectangle();
    ~Rectangle();
    void setLength(float newLength);
    void setWidth(float newWidth);
    float getLength();
    float getWidth();

    float calculateArea(float length, float width);
};