#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
   
    int alice_point=0;
    int bob_point=0;

    int first[3];
    cin >> first[0] >> first[1] >> first[2];

    int second[3];
    cin >> second[0] >> second[1] >> second[2];
    
    for (int i=0; i<3 ; i++) {

	if ( first[i] > second [i] ) {
		alice_point +=1;
	} else if ( first[i] < second [i] ) {
		bob_point += 1;
	} 

    }

    cout << alice_point << " " << bob_point << endl;
    return 0;
}




