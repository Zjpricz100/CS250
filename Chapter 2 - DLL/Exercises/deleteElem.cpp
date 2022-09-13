#include "DoublyList.h"
#include <iostream>
using namespace std;
void DoublyList::deleteElem(int key)
{
   if (first == nullptr)
   {
      cerr << "Cannot delete from an empty list.\n";
   }
   else
   {
      bool found = false;
      if (count == 1 && first->getData() == key)
      {
         delete first;
         first = nullptr;
         last = nullptr;
         found = true;
         --count;
      }
      else
      {
         if (first->getData() == key)
         {
            first = first->getNext();
            delete first->getPrev();
            first->setPrev(nullptr);
            found = true;
            --count;
         }
         else if (last->getData() == key)
         {
            last = last->getPrev();
            delete last->getNext();
            last->setNext(nullptr);
            found = true;
            --count;
         }
         else // the case where we traverse (inbetweeen both ends)
         {
            Node *current = first;
            while (current != nullptr && !found)
            {
               if (current->getData() == key)
               {
                  current->getPrev()->setNext(current->getNext()); // 2 -> 4
                  current->getNext()->setPrev(current->getPrev()); // 4 <- 2
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
      }
      
      if (!found)
      {
         cerr << "Element to be deleted is not in the list.\n";
      }
   }
}