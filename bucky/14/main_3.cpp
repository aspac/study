#include <iostream>
#include <string>
using namespace std;

class BuckyClass {

    private:
        string name;
    public:
        //constructor
        BuckyClass(string z) {
            setName(z);
        }

        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }

};


int main() {

    BuckyClass buckyObj("Hello bucky");
    cout << buckyObj.getName() << endl;

    BuckyClass buckyObjAgain("Bucky Salad");
    cout << buckyObjAgain.getName() << endl;
}
