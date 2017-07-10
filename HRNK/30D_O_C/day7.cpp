#include <vector>
#include <iostream>

#include <cmath>
#include <cstdio>

using namespace std;

int main() {

	int arr_len;
	cin >> arr_len;
	vector<int> arr_val(arr_len);
	vector<int> arr_new(arr_len);
	int new_idx = arr_len-1;

	for (int i=0; i < arr_len ; i++) {
		cin >> arr_val[i];
		arr_new[new_idx] = arr_val[i];
		new_idx--;
	}

	for (int j=0; j < arr_len ; j++) {
		cout << arr_new[j] << " ";
	}
	


}
