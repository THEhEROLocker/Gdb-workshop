#include <iostream>
using namespace std;

class A
{
    int x;

    public:
        A()
        {
            x = 0;
        }

        void increment()
        {
           ++x;
        }
};

int main()
{
    A obj;
    obj.increment();
    return 0;
}

