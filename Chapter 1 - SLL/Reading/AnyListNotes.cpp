#include "AnyList.h"

#include <iostream>
using namespace std;
class AnyListNotes
{
public:
    AnyListNotes() : ptrToFirst(nullptr), count(0) {}

    void insertEmpty(int data)
    {
        // NOTE: BELOW WE CAN USE THE OVERLOADED CONSTRUCTOR
        // TO GIVE THE NODE DATA AND NULLPTR ON CREATION
        ptrToFirst = new Node(data, nullptr); // default value

        // Long winded (but readable)
        /*
            Node *ptrToNewNode = new Node(4, nullptr);
            ptrToFirst = ptrToNewNode;
        */

        ++count; // we added an element, update var for it
    }
    void insertFront(int)
    {
        // Long winded
        // NOTE: ptrToFirst instead of nullptr as we are trying to link this element BEFORE 4
        /*
            Node *ptrToNewNode = new Node(2, ptrToFirst);
            ptrToFirst = ptrToNewNode; // head now points to first element
            ++count;
        */

        ptrToFirst = new Node(2, ptrToFirst);
        ++count;

        // NOTE THE ABOVE WORKS AS RIGHT SIDE IS EVALUATED FIRST.

        // this also works for inserting into empty
    }

    void print() const
    {
        // if list is empty, output to cerr
        if (ptrToFirst == nullptr)
            cerr << "List is empty.";
        else
        {
            // temp ptr = current
            Node *current = ptrToFirst;
            // while loop ENDS when current reaches the last node
            while (current != nullptr)
            {
                cout << current->getData() << " ";
                current = current->getPtrToNext();
            }
        }
    }

    void clearList();

    ~AnyListNotes();

private:
    // Pointer to point to the first node in the list.
    Node *ptrToFirst;
    // Variable to keep track of number of nodes in the list.
    int count;
};