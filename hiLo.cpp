#include <iostream>
#include "random.h"


bool play(){
	

	
	const int MIN=0;
	const int MAX=100;
	int num{Random::get(MIN,MAX)};
	int guess{0};
	int attempt{0};
	
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";


	while(attempt <=7 && guess !=num){
		std::cin >> guess;
		if(guess<num)
			std::cout << "Too low\n";
		else if(guess>num)
			std::cout << "Too high\n";

		attempt++;	
	}
	if(guess==num)
		std::cout << "Congratulations, you win!\n";
	else
		std::cout<<"Sorry, you lose\n";

	char again{};
	std::cout << "Play again? (y/n) ";
	std::cin >> again;
	return (again=='y' || again =='Y');
}


int main(){
	



	bool again{true};
	while(again){
		again=play();
	}
	return 0;
}
