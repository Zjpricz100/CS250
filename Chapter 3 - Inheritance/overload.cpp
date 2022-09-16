#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Parallelepiped.h"
Parallelepiped::Parallelepiped(double newWidth, double newLength, double newHeight) : Rectangle(newWidth, newLength)
{
   height = newHeight;
}

