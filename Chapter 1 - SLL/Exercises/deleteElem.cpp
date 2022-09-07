#include "AnyList.h"
#include "AnyList.cpp"
using namespace std;
#include <iostream>
void AnyList::deleteElem(int key)
{
    if (ptrToFirst == nullptr) // if empty
    {
        cerr << "The list is empty.\n";
    }
    else
    {
        // If key is the first element, delete it immediately
        if (ptrToFirst->getData() == key)
        {
            Node *current = ptrToFirst;
            ptrToFirst = ptrToFirst->getPtrToNext();
            delete current;
            current = nullptr;
            --count;
        }
        else
        {
            // Need to do a two pointer deletion algorithm
            Node *current = ptrToFirst->getPtrToNext();
            Node *trailingPtr = ptrToFirst;
            bool found = false;

            while (current != nullptr && !found)
            {
                if (current->getData() == key)
                {
                    found = true;
                    trailingPtr->setPtrToNext(current->getPtrToNext());
                    delete current;
                    current = nullptr;
                    --count;
                }
                else
                {
                    trailingPtr = current;
                    current = current->getPtrToNext();
                }
            }
            if (!found)
                cerr << "Element " << key << " is not in the list.\n";
        }
    }
}
