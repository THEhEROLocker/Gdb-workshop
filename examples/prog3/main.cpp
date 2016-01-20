// CS Tutors Make/GDB/Valgrind Workshop
// Colleen Murphy / Rohan Elukurthy

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    
    char *str = "Foo"; // Compiler marks the constant string as read-only
    *str = 'b'; // Which means this is illegal and results in a segfault
	
    char *p = NULL;

    if (i = 2)
	{
	    cout << "i is 2" << endl;
	}
    else
    {
        char temp = '\n';
        p = &temp;
    }
    *p = 'A';

	return 0;
}

