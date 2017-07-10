#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

	int arr_len;
	cin >> arr_len;
	string name, reqname;
	int number;
	//vector len 
	map<string,int> pb;
	vector<string> req_pb;
	
	for (int i=0; i < arr_len ; i++) {
		cin >> name >> number;
		pb[name]=number;	
	}

	while (cin>> reqname) {
		int is_found=0;

		if ( pb.find(reqname) == pb.end()) {
			cout << "Not found" << endl;
		} else {
			cout << reqname << "=" << pb.find(reqname)->second << endl;
		}


	}



}
