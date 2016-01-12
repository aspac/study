#include <iostream>
#include <string>
using namespace std;

class BuckyClass {

    private:
        string name;
    public:
        //constructor
        BuckyClass() {
            cout << "hello constructor" << endl;
        }

        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }

};


int main() {

    BuckyClass buckyObj;
    buckyObj.setName("Alloha");
    cout << buckyObj.getName() << endl;

}
