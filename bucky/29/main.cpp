#include <iostream>
using namespace std;

int tuna = 69;

int main() {
    int tuna = 20;
    cout << "Global tuna is " << ::tuna << endl;
    cout << "Local tuna is " << tuna << endl;
}

