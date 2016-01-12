#include <iostream>
using namespace std;

class Buckyclass {
    public:
        void helloworld() {
            cout << "hello bucky" << endl;
        }
};


int main() {

    cout << "refresh!" << endl;

    Buckyclass buckobj;
    buckobj.helloworld();

    return 0;
}
