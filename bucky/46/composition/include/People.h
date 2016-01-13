#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"


class People
{
    public:
        People(std::string x, Birthday y);
        void printInfo();

    private:
        std::string name;
        Birthday dateofbirth;

};

#endif // PEOPLE_H
