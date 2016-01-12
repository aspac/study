#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main() {


	string name;
	int pad_x;
	int pad_y;

	cout << "Please enter your first name : ";
	cin >> name;

	cout << "Please enter horizontal pad : ";
	cin >> pad_x;

	cout << "Please enter vertical pad : ";
	cin >> pad_y;	

	const string greeting = "Hello " + name + "!";
	//request of no padding  -> change to 0
	const int pad = 0;

	const int rows = pad_y * 2 + 3;
	const string::size_type cols = greeting.size() + pad_x *2 +2;

	cout<<endl;

	//write rows rows of output
	for (int r= 0; r != rows ; ++r) {
	
		string::size_type c=0;

		while ( c!= cols) {
			if (r == pad_y + 1 && c == pad_x + 1) {
				cout << greeting;
				c+=greeting.size();
			}else {
				if (r == 0 ||  r== rows -1 || c == 0 || c== cols-1)
					cout << "*";
				else 
					cout << " ";
				++c;
			}

		}
	cout << endl;		
	}

	return 0;
}
