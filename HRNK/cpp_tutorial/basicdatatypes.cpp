#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    //int, long, long long, char, float, and double, 
	int input_int;
        long input_long;
        long long input_longlong;
	char input_char;
  	float input_float;
	double input_double;

	scanf("%d %ld %lld %c %f %lf", &input_int, &input_long , &input_longlong, &input_char, &input_float, &input_double);
        printf("%d\n%ld\n%lld\n%c\n%.2f\n%.5lf\n", input_int, input_long ,input_longlong, input_char, input_float, input_double);
	

    return 0;



}


