#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int tc;
    string testcase;
    string wanted;
    cin >> tc;

    for (int i=0; i<tc; i++) {
	cin >> testcase;
	
	string odd_char;
	string even_char;
	for(int i = 0; i < testcase.length(); i++){
		char c = testcase[i];
		if (i%2==0) {
			odd_char+=c;
		} else {
                        even_char+=c;
                } 

	}	
	wanted = wanted+ odd_char+" " +even_char +"\n";
    }

    cout << wanted;

    return 0;
}
