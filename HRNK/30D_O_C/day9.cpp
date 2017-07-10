#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
	if (n==0) {
		return 1;
	}
	return n*factorial(n-1);

}	


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int req;
	cin >> req;
	int value = factorial(req);
	cout << value << endl;
    return 0;
}
