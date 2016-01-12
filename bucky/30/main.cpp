#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "i am printing integer " << x << endl;
}

void printNumber(float x) {
    cout << "i am printing float " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.23123;

    printNumber(a);
    printNumber(b);


}
