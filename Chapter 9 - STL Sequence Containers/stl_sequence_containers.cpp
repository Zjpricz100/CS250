#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void printVector(const vector<int> &aVector);
void printList(const list<int> &aList);

int main()
{

	/***************************************************************
			VECTORS
	****************************************************************/
	cout << "  ***  STL VECTOR CLASS  ***  \n\n";

	// Use the default constructor to declare an integer vector v1.
	vector<int> v1;

	// void push_back (const value_type& val);
	// Use function push_back to insert the following values
	// in v1: 12, 73, 41, 38, 25, 56, an 63 in this order.
	v1.push_back(12);
	v1.push_back(73);
	v1.push_back(41);
	v1.push_back(38);
	v1.push_back(25);
	v1.push_back(56);
	v1.push_back(63);

	// size_type size() const noexcept;
	// Create a variable of type int named sizeV1 and store
	// the size of the vector.
	// Use function size to retrieve the size of the vector.
	// Make sure you cast the return value of the function
	// size to the appropriate type.
	int sizeV1 = static_cast<int>(v1.size());

	// Use a FOR loop to print out the vector.
	// Do NOT use an iterator.
	for (int i : v1)
	{
		cout << i << " ";
	}
	cout << endl;
	// void clear() noexcept;
	//  Call the function clear on vector v1.
	v1.clear();

	// size_type size() const noexcept;
	// Call function size to print the size of v1.
	cout << v1.size() << endl;

	// size_type capacity() const noexcept;
	// Call function capacity to output the capacity of v1.
	cout << v1.capacity() << endl;

	// Create an array of integers containing:
	// 10,11,12,13,14,15,16,17,18,19
	int a[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

	// Use the default constructor to declare an integer vector v2.
	vector<int> v2;

	// void assign (InputIterator first, InputIterator last);
	// Use function assign to copy elements 12, 13, 14, 15, and
	// 16 from the array into v2.
	// One statement only.
	v2.assign(a + 2, a + 7);

	// Call the function printVector to print v2.
	printVector(v2);

	// const_reference back() const;
	// Use the function back output the last element in the vector
	// (Notice that the back function returns a reference.)
	cout << "LAST ELEMENT: " << v2.back() << endl;

	// Use the default constructor to declare an integer vector v3.
	vector<int> v3;

	// void assign (size_type n, const value_type& val);
	// Use function assign to insert the values 7, 7, 7, 7, and 7.
	// One statement only.
	v3.assign(5, 7);

	// Call the function printVector  to print v3.
	printVector(v3);

	// const_reference at(size_type n) const;
	// Use function at to replace the middle element with 100.
	// (Notice that the at function returns a reference.)
	v3.at(v3.size() / 2) = 100;

	// Call the function printVector to print v3.
	printVector(v3);

	// vector (const vector& x);
	// Use the copy constructor to create a new vector v4 with the
	// same elements of v3.
	vector<int> v4(v3);

	// Call the function printVector to print v4.
	printVector(v4);

	// Create an iterator iterVector4 to point to
	// the first element of v4.
	vector<int>::iterator iterVector4 = v4.begin();

	// Create an iterator iterVector2 to point to
	// the second element of v2.
	vector<int>::iterator iterVector2 = v2.begin() + 1;

	// iterator insert (const_iterator position,
	//                    InputIterator first, InputIterator last);
	// Use function insert to insert the second, third,
	// and fourth element of v2 as the first, second, and third
	// element of v4. Notice that the insert function returns
	// an iterator, but if we do not intend to use it, we can
	// ignore it.
	v4.insert(v4.begin(), iterVector2, iterVector2 + 3);

	// Call the function printVector to print v4.
	printVector(v4);

	// iterator insert (const_iterator position,
	//                   size_type n, const value_type& val);
	// Use the function insert to insert three 0s at the end of v4.
	// (Notice that the insert function returns an iterator,
	//  but if we do not intend to use it, we can ignore it.)
	v4.insert(v4.end(), 3, 0);

	// Call the function printVector to print v4.
	printVector(v4);

	// bool empty() const noexcept;
	// const_reference back() const;
	// void pop_back();
	// Use a WHILE loop to remove and output each
	// element of v2 backwards.
	// Use function empty for the loop condition,
	// function back to output the last element,
	// and function pop_back to remove elements.
	// (Notice that the back function returns a reference.)
	while (!v2.empty())
	{
		cout << v2.back() << " ";
		v2.pop_back();
	}
	cout << endl;
	// void resize (size_type n, const value_type& val);
	// Use function resize to insert three times number
	// 4 into v2.
	v2.resize(3, 4);

	// Call the function printVector to print v2.
	printVector(v2);

	// const_reference front() const;
	// Use function front to output the first element in v4.
	// (Notice that the front function returns a reference.)
	cout << v4.front() << endl;

	// void swap (vector& x);
	// Use function swap to swap v2 with v4.
	v2.swap(v4);

	// Call the function printVector to print v2.
	printVector(v2);

	// Create a new vector v5;
	vector<int> v5;

	// Use the overloaded assignment operator to copy all
	// the elements of v2 into v5.
	v5 = v2; // v5 now has 13 14 15 7 7 100 7 7 0 0 0

	// void resize (size_type n);
	// size_type size() const noexcept;
	// Delete the last element of v5 by using the
	// functions resize and size.
	v5.resize(v5.size() - 1); // because n > size, it deletes the filler elements

	// Call the function printVector to print v5.
	printVector(v5);

	// Create an iterator iterVector5 to point to the
	// first element of v5.
	vector<int>::iterator iterVector5 = v5.begin();

	// iterator erase (const_iterator position);
	// Call the function erase to delete the first
	// element of the vector. (Notice that the insert function
	// returns an iterator, but if we do not intend to use it,
	// we can ignore it.)
	v5.erase(iterVector5);

	// Call the function printVector to print v5 again.
	printVector(v5);

	// Create a vector of integers named v6 containing
	// numbers from 100 to 105.
	// Using the copy constructor, create a vector
	// named v7, a copy of v6.
	vector<int> v6 = {100, 101, 102, 103, 104, 105};
	vector<int> v7(v6);

	// iterator erase (const_iterator position);
	// iterator insert (const_iterator position,
	//                               const value_type& val);
	// Erase element 103 from v7 and insert element 333
	// in its place, by using an iterator.
	// Note that the function erase returns an iterator
	// that can be used to insert 333 in the right position.
	v7.insert(v7.erase(v7.begin() + 3), 333);

	// Using a range-based FOR loop, print the elements of v7.
	for (int i : v7)
	{
		cout << i << " ";
	}
	cout << endl;

	/***************************************************************
			LISTS
	****************************************************************/

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL LIST CLASS  ***  \n\n";

	// Use the default constructor to create three lists
	// of integers, intList1, intList2, and intList3.
	list<int> intList1;
	list<int> intList2;
	list<int> intList3;

	// void push_back (const value_type& val);
	// Use the function push_back to insert the following
	// values in the first list: 23 58 58 58 36 15 15 93 98 58
	intList1.push_back(23);
	intList1.push_back(58);
	intList1.push_back(58);
	intList1.push_back(58);
	intList1.push_back(36);
	intList1.push_back(15);
	intList1.push_back(15);
	intList1.push_back(93);
	intList1.push_back(98);
	intList1.push_back(58);

	// Call function printList to print intList1.
	printList(intList1);

	// Using the overloaded assignment operator,
	// copy elements of intList1 into intList2.
	intList2 = intList1;

	// Call function printList to print intList2.
	printList(intList2);

	// void sort();
	// Using function sort, sort all elements in the second list.
	intList2.sort();

	// Call function printList to print intList2.
	printList(intList2);

	// void unique();
	// Using function unique, remove all consecutive
	// duplicates in the list.
	intList2.unique();

	// Call function printList to print intList2.
	printList(intList2);

	// void push_back (const value_type& val);
	// Insert the following elements in the third list:
	//  13 23 25 136 198
	intList3.push_back(13);
	intList3.push_back(23);
	intList3.push_back(25);
	intList3.push_back(136);
	intList3.push_back(198);

	// Call function printList to print intList3.
	printList(intList3);

	// void merge (list& x);
	// Add to the second list all elements of the third list.
	// --> This is ONE statement only.
	intList2.merge(intList3);

	// Call function printList to print intList2.
	printList(intList2);

	/***************************************************************
	 *		Create statements using the functions below.
	 *       You might need to create new containers.
	 *		Is the output what you expected?
	 ****************************************************************/
	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  OTHER FUNCTIONS  ***  \n\n";

	list<int> myList1;
	list<int> myList2;
	list<int> myList3;
	vector<int> myVector1;
	vector<int> emptyVector;

	for (int i = 0; i < 20; ++i)
	{
		myList1.push_back(i);
		myList2.push_back(i);
		myList3.push_back(i);
		myVector1.push_back(i);
	}

	// list: void assign (size_type n, const value_type& val);
	myList1.assign(10, 100);
	printList(myList1);
	myList1.assign(20, 100);
	printList(myList1);
	// Assign OVERWRITES all elements to a specific size

	// vector: void assign (InputIterator first, InputIterator last);
	emptyVector.assign(myVector1.begin(), myVector1.end());
	printVector(emptyVector);

	// list: const_reference back() const;
	// (Notice that this back function returns a reference.)
	cout << myList2.back() << endl;
	// list: void clear() noexcept;
	myList1.clear();
	cout << myList1.size() << endl;
	// list: bool empty() const noexcept;

	while (!myList2.empty())
	{
		cout << myList2.front() << " ";
		myList2.pop_front();
	}
	cout << endl;

	// vector: const_reference front() const;
	cout << emptyVector.front() << " ";
	// list: iterator insert (const_iterator position,
	//                                const value_type& val);
	// (Notice that the insert function returns an iterator.)

	// list: void pop_back();

	// list: void pop_front();

	// list: void push_front (const value_type& val);

	// list: void remove (const value_type& val);
	myList3.remove(3);
	printList(myList3);

	// list: void reverse() noexcept;
	myList3.reverse();
	printList(myList3);
	// list: void splice (const_iterator position, list& x);
	list<int> smallList;
	list<int> mediumList;
	smallList.push_back(1);
	smallList.push_back(2);
	smallList.push_back(3);
	for (int i = 5; i < 15; ++i)
	{
		mediumList.push_back(i);
	}
	smallList.splice(smallList.begin(), mediumList);
	printList(smallList);

	// list: void splice (const_iterator position, list& x,
	//                                        const_iterator i);

	// list: void splice (const_iterator position, list& x,
	//                const_iterator first, const_iterator last);

	// so we can splice a whole list, one element, or a range of elements.

	cout << "\n\n----------------------------------------------------";

	cout << endl;
	return 0;
}

// Definition function printVector
void printVector(const vector<int> &aVector)
{
	for (const auto &element : aVector)
		cout << element << " ";
	cout << endl;
}

// Definition function printList
void printList(const list<int> &aList)
{
	for (const auto &element : aList)
		cout << element << " ";
	cout << endl;
}
