#include <iostream>


int sumTo(int max){

	int total{0};
	for(int i{1};i<=max;i++){
		total+=i;
	}
	return total;
}

int main(){
	
	int x{0};
	std::cout << "Enter a number\n";
	std::cin >> x;

	std::cout << sumTo(x);


	return 0;	
}
