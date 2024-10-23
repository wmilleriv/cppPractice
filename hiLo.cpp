#include <iostream>
#include "random.h"

constexpr std::string_view hiOrLow(int x){
	return x> 
}

int main(){
	
	const int MIN=0;
	const int MAX=100;


	int num{Random::get(MIN,MAX)};
	int guess{0}

	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
	while(attempt <=7 && guess !=num){
		std::cout << "Guess #" << attempt << ": \n";
       		std::cout << hiOrLow(num);
		attempt++;	
	}
	return 0;
}
