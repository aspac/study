#include <iostream>
#include <string>

#include "People.h"
#include "Birthday.h"

using namespace std;

People::People(string x, Birthday y)
:name(x), dateofbirth(y)
{

}

void People::printInfo() {
    cout << name << "was born on ";
    dateofbirth.printDate();
}
