#include "Node.cpp"

class AnyList
{
public:
    AnyList() : ptrToFirst(nullptr), count(0) {} 

    void insertEmpty(int)
    {
        // NOTE: BELOW WE CAN USE THE OVERLOADED CONSTRUCTOR
            // TO GIVE HTE NODE DATA AND NULLPTR ON CREATION
        ptrToFirst = new Node(4, nullptr); // default value

        // Long winded (but readable)
            /*
                Node *ptrToNewNode = new Node(4, nullptr);
                ptrToFirst = ptrToNewNode;
            */
        
        ++count; // we added an element, update var for it
    }
    void insertFront(int)
    {
        
    } 

    void print() const;

    void clearList();

    ~AnyList();

private:
    // Pointer to point to the first node in the list.
    Node *ptrToFirst; 
    // Variable to keep track of number of nodes in the list.
    int count;        
};