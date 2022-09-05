class Node
{
public:
    // Default constructor
    Node() : data(0), ptrToNext(nullptr){}

    // Overloaded constructor
    Node(int newData, Node *newPtrToNext)
             : data(newData), ptrToNext(newPtrToNext){}

    // Function getPtrToNext returns the address of the next node.
    Node* getPtrToNext( ) const { return ptrToNext; }

    // Function getData returns the int value stored in the node.
    int getData( ) const { return data; }

    // Function setPtrToNext overwrites the address stored in 
    // the node with a given address.
    void setPtrToNext( Node *newPtrToNext ) 
             { ptrToNext = newPtrToNext; }

    // Function setData overwrites the int value stored in 
    // the node with a given value.
    void setData( int newData ) { data = newData; }

    // Destructor
    ~Node(){}

private:
    // An int stored in the node.
    int data;        

    // A pointer storing the address of next node.
    Node *ptrToNext; 
};