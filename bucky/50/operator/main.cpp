#include <iostream>
#include <Sally.h>

using namespace std;

int main()
{
    Sally a(53);
    Sally b(52);
    Sally c;

    c = a+b;
    cout << "value of Sally is : " << c.getSally();

    return 0;
}
