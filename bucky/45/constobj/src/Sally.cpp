#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally()
{
    //ctor
}

Sally::~Sally()
{
    //dtor
}


void Sally::printShiz() {

    cout << "i am a regular function" << endl;

}

void Sally::printShizConst() const {
    cout << "i am the constant function " << endl;
}
