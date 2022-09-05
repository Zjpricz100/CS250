#include <iostream>
#include <vector>
using namespace std;
void fillArray(const vector<int> &nums, int *arr, int &numOfElements)
{
    int size = static_cast<int>(nums.size());
    int i = 0;
    do
    {
        arr[i] = nums[i];
    } while (++i < size);
    numOfElements = size;
}
 
// NOTE: BE SURE TO CHANGE NUMBER OF ELEMENTS AT THE END.
// DONT HAVE UNNECCESARY ITERATIVE STATEMENTS
 
 
