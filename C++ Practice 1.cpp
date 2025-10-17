#include <iostream>
// COS ASSIGNMENT NO. 2
// Swapping the values of two variables
using namespace std;

int main() {
	int a = 20;
	double b = 10.50; 
	int temp = a; // temporary variable
	a = b;
	b = temp;
	cout <<"b = "<< b <<endl // endl >> end line
	     <<"a ="<< " "<< a;
	return 0;
}