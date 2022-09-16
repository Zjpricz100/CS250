#include "Rectangle.h"
class Parallelepiped: public Rectangle
{
    private:
        double height;

    Parallelepiped(double newWidth, double newLength, double newHeight);
    void setDimensions(double newWidth, double newLength, double newHeight);
};