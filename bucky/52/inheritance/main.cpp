#include <iostream>
#include "Mother.h"
#include "Daugher.h"

using namespace std;

int main()
{
    cout << "Introducing inheritance" << endl;

    Mother m;
    cout << m.Shout() << endl;

    cout << "Daughter is trying to shout " << endl;

    Daugher d;
    cout << d.Shout() << endl;
    return 0;
}
