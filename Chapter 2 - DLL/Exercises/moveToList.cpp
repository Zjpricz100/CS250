#include "DoublyList.h"
void DoublyList::moveToList(DoublyList& other)
{
   if (count != 0) // if the calling object is NOT empty
   {
      // move list to param
      other.first = first;
      other.last = last;
      other.count = count;
      
      // empty and fix calling
      first = nullptr;
      last = nullptr;
      count = 0;
   }
}