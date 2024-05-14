#include <iostream>

using namespace std;

class Reactangle
{
private:
    float length;
    float width;
    Reactangle()
    {
        width = 0;
        length = 0;
    }
    ~Reactangle();

public:
    void setWidth(float newWidth)
    {
        width = newWidth;
    }
    void setLength(float newLenght)
    {
        length = newLenght;
    }

    float getWidth()
    {
        return width;
    }

    float getLenght()
    {
        return length;
    }
    float calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Reactangle rectangle1;
    float b, a;
    cout << "Enter the width and the lenght values separated by a space: \n";
    cin >> a >> b;

    rectangle1.setLength(4.5);
    rectangle1.setWidth(5.4);
}