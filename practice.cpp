#include <iostream>


void fizzBuzz(int max){

	for(int i{1};i<=max;i++){
		if(i%3==0 && i%5==0){
			std::cout << "fizzbuzz\n";
		}
		else if(i%5==0)
		{
			std::cout << "buzz\n";
		}
		else if(i%3==0){
			std::cout << "fizz\n";
		}
		else{
			std::cout << i <<'\n';
		
		}
	}
}

int main(){
	
	int x{0};
	std::cout << "Enter a number\n";
	std::cin >> x;

	fizzBuzz(x);


	return 0;	
}
