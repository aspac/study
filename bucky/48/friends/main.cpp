#include <iostream>

using namespace std;

class StankFist {

        public:
            StankFist() {
                stinkyvar=0;
            }
        private:
            int stinkyvar;

        friend void stinkysFriend(StankFist &sfo);

};

void stinkysFriend(StankFist &sfo) {
    sfo.stinkyvar = 99;
    cout << sfo.stinkyvar << endl;
}



int main()
{

    StankFist bob;
    stinkysFriend(bob);

    return 0;
}
