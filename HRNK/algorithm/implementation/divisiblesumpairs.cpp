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
    int n;
    int k;
    int ctr=0;

    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    for (int i=0; i<n ; i++) {
	for (int j=n-1; j>=0; j--) {
		if ( i!=j ) {
			int num = a[i] + a[j];
			cout << "for" << a[i] << "and" << a[j] << endl; 
			if ( num % k == 0) {
				ctr+=1;
			}
		}
		//cout << a[i] + a[j] << endl;
		
    	}
    }

    cout << "ctr is " << ctr << endl;

    return 0;
}
