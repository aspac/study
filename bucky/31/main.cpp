#include <iostream>
using namespace std;

int factorialFinder(int x) {

    if(x == 1) {
        return 1;
    } else {
        return x*factorialFinder(x-1);
    }

}

int main () {

    cout << "value of fact 5 is " << factorialFinder(5) << endl;

}
