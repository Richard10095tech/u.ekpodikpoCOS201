#include <iostream>

//Nested For loop
using namespace std;

int main(){
	//inner loop
	int sum = 0;
	int i;
	
	for (i = 1; i <= 2; i++){
		for (int j; j <= 3; j++){
			sum = sum + i + j;
		    cout<<sum;
		}
			cout<<endl;
	}
      
      	return 0;
}