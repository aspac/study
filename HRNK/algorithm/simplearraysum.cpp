#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int sizeofarray;
    cin >> sizeofarray;
    vector<int> a(sizeofarray);
    int sum = 0;

    for (int i = 0; i < sizeofarray; ++i)
    {
    	cin >> a[i];
	sum+=a[i];       
    }
 
    cout << sum << endl;
}


