#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;

template <typename T>
void printVector(const vector<T> &v)
{
    for (T elem : v)
    {
        cout << elem << " ";
    }
    cout << "\n";
}
template <typename T>
void printList(list<T> &l)
{
    list<int>::iterator itr = l.begin();
    while (itr != l.end())
    {
        cout << *itr << " ";
        ++itr;
    }
    cout << "\n";
}

// Exercise 7
bool lessOrEqualTo50(int a)
{
    return a <= 50;
}
// EXERCISE 10
bool lessThan10(int a)
{
    return a < 10;
}

int main()
{
    string heading(10, '-');

    // EXCERCISE 1
    // its fine to use begin() but what if the vector is larger? last 3 elements
    //  will work regardnlessly with the below method
    cout << heading << "EXERCISE 1" << heading << "\n";

    vector<int> v1;
    v1.resize(5);
    fill(v1.rbegin(), v1.rbegin() + 3, 9);
    printVector(v1);

    fill(v1.begin() + 1, v1.begin() + 3, 5);
    printVector(v1);

    // EXERCISE 2
    cout << heading << "EXERCISE 2" << heading << "\n";

    list<int> l1;
    l1.resize(6);

    fill(l1.begin(), l1.end(), 4);
    printList(l1);
    auto itrList = l1.rbegin();
    for (int i = 0; i < 3; ++i)
    {
        ++itrList;
    }
    fill(l1.rbegin(), itrList, 200);
    printList(l1);

    // EXERCISE 3
    // find returns last if not found, find returns a iterator pointing
    // to found elem
    cout << heading << "EXERCISE 3" << heading << "\n";

    vector<int> v3 = {45, 95, 76, 21, 35, 62, 85};
    auto iterVector3 = find(v3.begin(), v3.end(), 62);
    if (iterVector3 == v3.end())
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << iterVector3 - v3.begin() << endl;
    }

    // EXERCISE 4
    cout << heading << "EXERCISE 4" << heading << "\n";

    vector<int> v4 = {30, 20, 10, 90, 50, 80, 70, 40};
    auto iterVector4 = find(v4.begin() + 2, v4.begin() + 7, 50);
    if (iterVector4 != v4.begin() + 7)
    {
        cout << iterVector4 - v4.begin() << endl;
    }
    else
    {
        cout << "Elemnent not found\n";
    }

    // EXERCISE 5
    cout << heading << "EXERCISE 5" << heading << "\n";

    list<int> l5 = {8, 7, 6, 1, 3};
    auto iterList5 = find(l5.begin(), l5.end(), 1);
    if (iterList5 != l5.end())
    {
        l5.insert(iterList5, 100);
    }
    printList(l5);

    // EXERCISE 6

    // NOTE: Original print does not CHANGE the size of the vector. None of the
    // stl algorithms do this.

    // WE MUST RESIZE or ERASE the filler at the end
    cout << heading << "EXERCISE 6" << heading << "\n";

    vector<int> v6 = {1, 2, 3, 2, 4, 5, 2, 6, 7};
    auto iterVector6 = remove(v6.begin(), v6.end(), 2);
    printVector(v6);

    v6.erase(iterVector6, v6.end());
    // or v6.resize(iterVector6 - v6.begin())
    printVector(v6);

    // EXERCISE 7
    cout << heading << "EXERCISE 7" << heading << "\n";

    vector<int> v7 = {45, 89, 12, 63, 35, 10, 28, 95, 67, 22};
    v7.erase(
        remove_if(v7.begin(), v7.end(), lessOrEqualTo50),
        v7.end());
    printVector(v7);

    // EXERCISE 8
    cout << heading << "EXERCISE 8" << heading << "\n";

    vector<int> v8 = {-1, 2, 3, -2, 4, -7, -5, 1, 6};
    auto iterVector8 = remove_if(v8.begin(), v8.end(),
                                 [](int a)
                                 { return a < 0; });
    v8.resize(iterVector8 - v8.begin());
    printVector(v8);

    // EXERCISE 9
    cout << heading << "EXERCISE 9" << heading << "\n";

    vector<int> v9 = {10, 10, 62, 19, 31, 10, 24, 79, 10, 72};
    replace(v9.begin(), v9.end(), 10, 1000);
    printVector(v9);

    // EXERCISE 10
    cout << heading << "EXERCISE 10" << heading << "\n";

    vector<int> v10 = {10, 10, 2, 19, 31, 10, 4, 9, 10, 2};
    replace_if(v10.begin(), v10.end(), lessThan10, 2000);
    printVector(v10);

    // EXERCISE 11
    cout << heading << "EXERCISE 11" << heading << "\n";

    vector<int> v11 = {10, 10, 2, 19, 31, 10, 4, 9, 10, 2};
    replace_if(
        v11.begin(), v11.end(),
        [](int a)
        { return a < 10; },
        2000);
    printVector(v11);

    // EXERCISE 12
    cout << heading << "EXERCISE 12" << heading << "\n";

    vector<int> v12 = {1, 2, 3, 4, 5};
    reverse(v12.begin(), v12.end());
    printVector(v12);

    // EXERCISE 13
    cout << heading << "EXERCISE 13" << heading << "\n";

    vector<int> v13 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(v13.begin() + 2, v13.begin() + 9);
    printVector(v13);

    // EXERCISE 14
    // MIDDLE BECOMES FIRST, rotates to the right
    cout << heading << "EXERCISE 14" << heading << "\n";

    vector<int> v14 = {1, 2, 3, 4, 5, 6};
    rotate(v14.begin(), v14.begin() + 2, v14.end());
    printVector(v14);

    // EXERCISE 15
    cout << heading << "EXERCISE 15" << heading << "\n";

    vector<int> v15 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iterVector15 = v15.begin();
    rotate(iterVector15 + 4, iterVector15 + 6, iterVector15 + 7);
    printVector(v15);

    // EXERCISE 16
    cout << heading << "EXERCISE 16" << heading << "\n";

    vector<int> v16 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(v16.begin() + 2, v16.begin() + 8);
    printVector(v16);
}