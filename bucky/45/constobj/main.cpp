#include <iostream>
#include "Sally.h"
using namespace std;


int main()
{
    Sally salobj;
    salobj.printShiz();


    const Sally constObj;
    constObj.printShizConst();

    return 0;
}
