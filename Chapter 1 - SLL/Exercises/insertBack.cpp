#include "AnyList.h"
void AnyList::insertBack(int data)
{
    Node *ptrToNewNode = new Node(data, nullptr);

    if (ptrToFirst == nullptr) // empty list
    {
        ptrToFirst = ptrToNewNode;
    }
    else
    {
        Node *current = ptrToFirst;
        while (current->getPtrToNext() != nullptr) // stop when the NEXT element is nullptr
        {
            current = current->getPtrToNext();
        }
        current->setPtrToNext(ptrToNewNode); // links
    }
    ++count; // added an element
}
