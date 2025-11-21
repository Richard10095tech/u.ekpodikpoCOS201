#include <iostream>

using namespace std;

int max(int num1, int num2){
	int result;
	if (num1 > num2){
	  result = num1 + num2;	
	}
	else if(num1 < num2){
		result = num1 - num2; 
	}
	else if(num1 == num2){
		result = num1 * num2;
	}
	else if(num1 <= num2){
		result = num1 / num2;
	}
	else if(num1 >= num2){
		result = num1 % num2;
	}
	else{
		result = 0;
	}
	return result;
}

int main(){
	int num1, num2;
	cout<<"Enter your numbers: "<<endl;
	cin>>num1;
	cin>>num2;
	int new_result = max(num1, num2);
	cout<<"The result is "<<new_result;
}