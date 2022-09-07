#include "AnyList.h"
#include <iostream>
using namespace std;
void AnyList::replaceData(int data, int replacement)
{
    Node *current = ptrToFirst;
    bool foundDataToReplace = false;
    while (current != nullptr && !foundDataToReplace)
    {
        if (current->getData() == data) // found key
        {
            foundDataToReplace = true;
            current->setData(replacement);
        }
        else
        {
            current = current->getPtrToNext();
        }
    }
    if (!foundDataToReplace)
        cout << "Element is not in the list.\n";
}

// PROF

void AnyList::replaceData(int oldKey, int newKey)
{
    bool found = false; // to stop the loop when key is found
    Node *current = ptrToFirst;
    while (current != nullptr && !found)
    {
        if (current->getData() == oldKey)
            found = true;
        else
            current = current->getPtrToNext();
    }

    if (current == nullptr) // key was not found
        cout << "Element is not in the list." << endl;
    else
        current->setData(newKey);
}

// NOTE: Using a flag is a MUST as you can exit out of the loop AS soon as you find
// the data to replace