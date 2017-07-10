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
using namespace std;


int main(){

        int m[6][6];
        for (int i = 0; i < 6; ++i) {
                for (int j = 0; j < 6; ++j) {
                        std:: cin >> m[i][j];
        }
    }
        
	int sum[16];
	int ctr, curr_sum;
        //array row
        for (int i=0; i<4; i++) {
             //array column
             for (int j=0; j<4; j++) {
 			curr_sum= m[i][j] + m[i][j+1] + m[i][j+2] + m[i+1][j+1] + m[i+2][j] + m[i+2][j+1] + m[i+2][j+2];
			sum[ctr]=curr_sum;	
			ctr+=1;
             }
        }

	std::sort(std::begin(sum), std::end(sum));
	cout << sum[15] << endl;

    return 0;
}

