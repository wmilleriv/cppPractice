#include <iostream>


void fizzBuzz(int max){

	for(int i{1};i<=max;i++){
		bool showNum{true};
		if(i%3==0){
			std::cout << "fizz";
			showNum=false;
		}
		if(i%5==0)
		{
			std::cout << "buzz";
			showNum=false;
		}
		if(i%7==0){
			std::cout << "pop";
			showNum=false;
		}
		if(showNum){
			std::cout << i;
		}
		std::cout <<'\n';
	}
}

int main(){
	
	int x{0};
	std::cout << "Enter a number\n";
	std::cin >> x;

	fizzBuzz(x);


	return 0;	
}
