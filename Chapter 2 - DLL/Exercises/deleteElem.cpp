#include "DoublyList.h"
#include <iostream>
using namespace std;

// if empty, print error
// else
// if first is key and count is one, delete and make the first and last nullptr 
// if first is key but there are more elements, ADVANCE first, delete firstPrev, MAKE firstPrev NULLPTR!!!!
// if last is key, go backwards once, delete lastNext, MAKE lastNext NULLPTR!!!
// iterate through if between, make current point to nullptr after deleting
void DoublyList::deleteElem(int elementToDelete)
{
   if (first == nullptr)
   {
      cerr << "Cannot delete from an empty list.\n";
   }
   else
   {
      bool found = false;
      if (first->getData() == elementToDelete)
      {
         if (count == 1)
         {
            delete first;
            first = nullptr;
            last = nullptr;
         }
         else // one element to delete, more elements in the list
         {
            first = first->getNext();
            delete first->getPrev();
            first->setPrev(nullptr); // DONT FORGET THIS
         }
         found = true;
         --count;
      }
      else if (last->getData() == elementToDelete)
      {
         last = last->getPrev();
         delete last->getNext();
         last->setNext(nullptr); // DONT FORGET THIS
         found = true;
         --count;
      }
      else
      {
         Node *current = first->getNext(); // we already know its not the first element
         while (current != nullptr && !found)
         {
            if (current->getData() == elementToDelete)
            {
               current->getPrev()->setNext(current->getNext());
               current->getNext()->setPrev(current->getPrev());
               delete current;
               current = nullptr;
               found = true;
               --count;
            }
            else
            {
               current = current->getNext();
            }
         }
      }
      
      if (!found)
      {
         cerr << "Element to be deleted is not in the list.\n";
      }
      
      
   }
}

