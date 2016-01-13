#include <iostream>
using namespace std;

int main() {

    int bucky[5];
    int *bpo = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    cout << "bpo is at " << bpo << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bpo+=2;
    cout << "bpo is at " << bpo << endl;
}
