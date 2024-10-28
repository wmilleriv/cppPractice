#include <iostream>
#include "random.h"


void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


bool clearFailedExtraction()
{
    // Check for failed extraction
    if (!std::cin) // If the previous extraction failed
    {
        if (std::cin.eof()) 
        {
		std::cerr << "EOF error\n";
		std::exit(0);
	}
        std::cin.clear(); // Put us back in 'normal' operation mode
        ignoreLine();     // And remove the bad input

        return true;
    }

    return false;
}

int getGuess(){

	int guess{0};

	while(true){
		std::cin >> guess;
       		if (clearFailedExtraction())
       		{
           		std::cout << "Oops, that input is invalid.  Please try again.\n";
            		continue;
        	}

       		 ignoreLine(); // Remove any extraneous input
        	return guess; 
   	 }
}
bool play(){
	
	const int MIN=0;
	const int MAX=100;
	int num{Random::get(MIN,MAX)};
	int guess{0};
	int attempt{0};
	
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";


	while(attempt <=7 && guess !=num){
		guess=getGuess();
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
