#include <iostream>
#include <vector>
using namespace std;
 
// MY SOLUTIONS
void insertAtIndex(int *a, int &numOfElements, int capacity, int data, int index)
{
    if (index >= capacity)
    {
        cout << "The array cannot have more than " << capacity << " elements.\n";
    }
    else if (numOfElements >= capacity)
    {
        cout << "Array is full. Cannot insert another element.\n";
    }
    else if (index > numOfElements)
    {
        cout << "You can only insert contiguous elements in the array.\n";
    }
    else
    {
        ++numOfElements;
        for (int i = numOfElements; i > index; --i)
        {
            a[i] = a[i - 1];
        }
        a[index] = data;
    }
}
 
// PROFESSOR SOLUTION
void insertAtIndex(int a[], int &numOfElements,
                   int cap, int element, int idx)
{
    if (idx >= cap)
        cout << "The array cannot have more than "
             << cap << " elements.\n";
    else if (numOfElements == cap)
        cout << "Array is full. Cannot insert another element.\n";
    else if (idx > numOfElements)
        cout << "You can only insert contiguous elements in the array.\n";
    else
    {
        // shift numbers
        for (int i = numOfElements - 1; i >= idx; --i)
            a[i + 1] = a[i];
 
        // insert element
        a[idx] = element;
 
        // update number of elements in the array
        ++numOfElements;
    }
}
 
// The same, she just increments later while I increment first.
 
// REMEMBER HORIZONTAL SCROLLING!!! SPREAD OUT COUT
