#include "AnyList.h"
using namespace std;

// Swap the value of the first node with the value of the node before last.
void AnyList::swapValues()
{
    // if empty, or count is one no need to swap

    if (count == 2)
    {
        int tempData = first->getData();
        first->setData(first->getNext()->getData());
        first->getNext()->setData(tempData);
    }
    else
    {
        Node *current = first;
        while (current->getNext() != nullptr)
        {
            current = current->getNext();
        }

        int tempData = first->getData();
        first->setData(current->getData());
        current->setData(tempData);
    }
}