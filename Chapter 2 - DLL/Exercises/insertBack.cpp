#include "DoublyList.h"
void DoublyList::insertBack(int data)
{
   if (first == nullptr)
   {
      first = new Node(data, nullptr, nullptr); // new element, nullptr on BOTH sides, first points to it
      last = first; // last and first point to same location here   
   }
   else
   {
      last->setNext(new Node(data, last, nullptr)); // points BACK to last, forward to NULLPTR
      last = last->getNext(); // advances last
   }
   ++count;
}