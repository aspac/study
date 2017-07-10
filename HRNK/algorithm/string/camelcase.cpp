#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string input;
    cin >> input;

    int sum=1;
    for (int i=0; i<input.length() ; i++) {
	
        if ( isupper(input[i])) {
		sum+=1;
	} 
    }

    cout << sum << endl;

    return 0;
}


