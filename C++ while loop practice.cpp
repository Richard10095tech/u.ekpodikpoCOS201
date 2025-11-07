#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;
    do{
    	sum = sum + i;
    	i++;
    	cout<<sum<<"\n";
	}while(i < 10);
}