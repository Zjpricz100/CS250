    #include "AnyList.h"

using namespace std;

void AnyList::insertFront(int newData)
{
    first = new Node(newData, first);
    ++count;
}

void AnyList::clearList()
{ 	
	Node* temp = first;

	while (first != nullptr)
    {
		first = first->getNext();
        delete temp;
		temp = first;
    }

	count = 0;
}

void AnyList::print() const
{
    if (first == nullptr) 
        cerr << "List is empty.";  
    else
    {
        Node *current = first;  
        while (current != nullptr)
        {                         
            cout << current->getData() << " "; 
            current = current->getNext();                         
        }
    }
}

AnyList::~AnyList()
{
	clearList();
}




    
