#include <iostream>
using namespace std;

//COS ASSIGNMENT 3
int main(){
	
	// Getting value for the user purchase amount
	cout<< "what is the total purchase amount or sales? :";
	double sales;
	cin>> sales;
	
	double sales_tax = .06;
	cout<< "the sales tax is "<< sales * sales_tax;
	return 0;		
}
