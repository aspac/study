#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
: regVar(a),
constVar(b)
{
    //ctor
}

Sally::~Sally()
{
    //dtor
}

void Sally::print() {
    cout << "regular var is : " << regVar << endl;
    cout << "constvar var is : " << constVar << endl;
}
