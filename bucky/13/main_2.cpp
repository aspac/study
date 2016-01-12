#include <iostream>
#include <string>
using namespace std;

class BuckyClass {

    public:
        //setter
        void setName(string x) {
            name = x;
        }
        //getter
        string getName() {
            return name;
        }

    private:
        string name;
};

int main() {

    BuckyClass buckyobj;
    buckyobj.setName("Bucky roberts");
    cout << buckyobj.getName() << endl;
    return 0;
}
