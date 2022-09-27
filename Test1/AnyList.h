    #ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>	

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) : data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
    int data;		
    Node *next;	
};


class AnyList
{	
public:
	AnyList() : first(nullptr), count(0) {}

	// member functions

    // 23
    void swapValues();

	void clearList();
    void insertFront(int);
    void print() const;
	~AnyList();

private:
	Node *first;	
	int count;		
};

#endif
    
