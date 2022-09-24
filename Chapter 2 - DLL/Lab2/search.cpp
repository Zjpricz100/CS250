
#include "DoublyList.h"
bool DoublyList::search(int key) const
{
    if (count == 1)
    {
        return (first->getData() == key);
    }
    else if (first->getData() == key || last->getData() == key)
    {
        return true;
    }
    else
    {
        Node *current = first->getNext();
        while (current != nullptr)
        {
            if (current->getData() == key)
            {
                return true;
            }
            else
            {
                current = current->getNext();
            }
        }
        return false;
    }
}
