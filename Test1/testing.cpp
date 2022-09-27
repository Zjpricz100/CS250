    #include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
    // test cases

    AnyList smallList;
    
    for (int i = 0; i < 10; ++i)
    {
        smallList.insertFront(i);
    }

    smallList.print();

    



	cout << endl;
	return 0;
}

    
