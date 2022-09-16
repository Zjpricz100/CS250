#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Parallelepiped.h"
void Parallelepiped::setDimensions(double newWidth, double newLength, double newHeight)
{
   setLength(newLength); // because length is private, we should use a set function
 
   height = newHeight;
   width = newWidth;
}

