#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>

class Node
{
public:
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int theData, Node *prevLink, Node *nextLink)
        : data(theData), prev(prevLink), next(nextLink) {}
    int getData() const { return data; }
    Node *getPrev() const { return prev; }
    Node *getNext() const { return next; }
    void setData(int theData) { data = theData; }
    void setPrev(Node *prevLink) { prev = prevLink; }
    void setNext(Node *nextLink) { next = nextLink; }
    ~Node() {}

private:
    int data; // To simplify, we are using only one piece of data.
    Node *prev;
    Node *next;
};

class DoublyList
{
public:
    DoublyList() : first(nullptr), last(nullptr), count(0) {}

    void insertFront(int newData);

    void printForward() const;
    void printReverse() const;

    void clearList();
    ~DoublyList();

private:
    // Pointer to the first node on the list.
    Node *first;
    // Pointer to the last node on the list.
    Node *last;
    // Number of nodes in the list.
    int count;
};

#endif

// NOTE ON DELETING

// check if list is empty
// print errror
// check if first node is to be deleted
// make sure to set both pointers to nullptr
// if the list has one element
// if node to delete is last
// delete it using last
// if BETWEEN
// DO NOT APPLY TWO POINTER
// INSTEAD

// current->getPrev()->setNext(current->getNext())
// this connects the pointer before deletion to point to the pointer after deletion
// current->getNext()->setPrev(current->getPrev())
// delete current
// current = nullptr