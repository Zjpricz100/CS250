#include <iostream>
#include "AnyList.h"
#include "AnyList.cpp"

int main()
{
    AnyList head;

    head.insertFront(5);
    head.insertFront(4);
    head.insertFront(3);
    head.insertFront(2);
    head.insertFront(1);

    head.print();

    // lets now delete the element 3 from this list
    // we MUST connect 2 to 4 first so we need two pointers

    // trailCurrent -> 2
    // current -> 3

    // Connect trailCurrents pointer to currents NEXT pointer to skip over 3

    // delete current which deletes 3

    // make current point to nullptr so it isnt dangling

    // ALGORITHM
    // if list is empty
    // output cerr
    // if node to delete is first node
    // connect ptrToFirst to second node
    // if node to delete is after first
    // two pointer approach
    // if node is not found
    // output cout. element isnt in list
}