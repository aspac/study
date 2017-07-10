#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int number;
	int remainder;
	int ctr_max, ctr;

	cin >> number;
	vector<int> rem;

	while(number > 0) {
	        remainder = number%2;
    		number = number/2;
		rem.insert(rem.begin(), remainder);	
	}

	for (vector<int>::const_iterator i= rem.begin(); i!=rem.end(); i++) {
		if (*i==1) {
			ctr++;
		} else {
			ctr=0;
		}

		if (ctr > ctr_max) {
			ctr_max=ctr;
		}
	}

	cout << ctr_max << endl;


    return 0;
}
