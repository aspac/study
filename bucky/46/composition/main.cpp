#include <iostream>
#include <string>

#include "People.h"
#include "Birthday.h"

using namespace std;

int main() {

    Birthday birtdobj(1,2,2016);


    People peopleObj("Bucky the king", birtdobj);
    peopleObj.printInfo();


    return 0;
}
