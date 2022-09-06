#include "AnyList.h"
using namespace std;
#include <iostream>

// MY SOL (Zach)
bool AnyList::search(int val) const
{
    Node *current = ptrToFirst;
    if (ptrToFirst == nullptr) // list empty
    {
        cerr << "The list is empty.\n";
        return false;
    }
    else
    {
        while (current != nullptr)
        {
            if (current->getData() == val)
                return true;
            else
                current = current->getPtrToNext();
        }
    }
    return false;
}

// PROF
bool AnyList::search(int key) const
{
    // Do NOT create any variables here. If the list is empty,
    // you are just wasting memory. Create your variables in
    // the ELSE block.

    if (count == 0) // can also use: if (first == nullptr)
    {
        cerr << "The list is empty.\n";
        // Is your output message formatted as expected?
        return false;
        /*
            If "return false" was missing in this block, then
            this path would not return a value. This means that
            in the case count is 0, the function will not behave
            as expected.
        */
    }
    else // Make sure you are using an IF/ELSE statement.
    {
        Node *current = ptrToFirst;

        while (current != nullptr)
        {
            if (current->getData() == key)
                return true;
            else
                current = current->getPtrToNext();
        }

        return false;
    }
}

// NOTE: DO NOT CREATE CURRENT UNTILL U CHECK IF ITS EMPTY. DONT WASTE MEMORY
// USE IF ELSE APPROPIATELY
