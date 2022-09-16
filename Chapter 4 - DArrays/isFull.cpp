#include "DArray.h"
using namespace std;
bool DArray::isFull() const
{
   return numOfElements == capacity;
}
