#include <iostream>
#include <string>
using namespace std;

class BuckyClass {
    public:
        string name;
};

int main() {

    BuckyClass buckyobj;
    buckyobj.name = "Bucky roberts";
    cout << buckyobj.name << endl;
    return 0;
}
