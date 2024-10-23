#include <iostream>

// Gets tower height from user and returns it
const double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
constexpr double calculateBallHeight(double towerHeight, int seconds)
{
	constexpr double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance { gravity * (seconds * seconds) / 2.0 };
	const double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if(ballHeight>0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double height)
{
	int seconds{0};
	
	while(height >0){
		height= calculateBallHeight(height, seconds);
		printBallHeight(height, seconds);
		seconds++;
	}
}

int main()
{
	double towerHeight{ getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight);

	return 0;
}
