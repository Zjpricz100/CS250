#include "DoublyList.h"
void DoublyList::insertInOrder(int element)
{
    if (first == nullptr)
    {
        first = new Node(element, nullptr, nullptr);
        last = first;
    }
    else
    {
        if (first->getData() >= element) // data can be added before first
        {
            first = new Node(element, nullptr, first);
            first->getNext()->setPrev(first);
        }
        else if (last->getData() <= element) // data can be added after last
        {
            last = new Node(element, last, nullptr);
            last->getPrev()->setNext(last);
        }
        else // data has to be added in between
        {
            bool found = false;
            Node *current = first->getNext();
            while (current != nullptr && !found)
            {
                if (current->getData() >= element) // element should be inserted before
                {
                    Node *newElement = new Node(element, current->getPrev(), current);
                    current->getPrev()->setNext(newElement);
                    current->setPrev(newElement);
                    found = true;
                }
                else
                {
                    current = current->getNext();
                }
            }
        }
    }
    ++count;
}
