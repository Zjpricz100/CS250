#include "DoublyList.h"
void DoublyList::swapLists(DoublyList &otherList)
{
    // temps to store the calling objects data
    Node *tempFirst = first;
    Node *tempLast = last;
    int tempCount = count;

    // make the calling objects members point to parameters members
    first = otherList.first;
    last = otherList.last;
    count = otherList.count;

    // make the parameters members point to calling objects members through the temps;
    otherList.first = tempFirst;
    otherList.last = tempLast;
    otherList.count = tempCount;
}
