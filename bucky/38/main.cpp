#include <iostream>
using namespace std;

int main() {
    int fish = 5;
    cout << &fish << endl;

    int *fishPtr = NULL;
    fishPtr = &fish;

    cout << fishPtr << endl;


}
