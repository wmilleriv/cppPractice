#include <iostream>

// Provide the definition for IntPair and the print() member function here

struct IntPair{

	int x{0};
	int y{0};

	void print(){
		std::cout << "{" << x << ", " << y << "}";
	}
		

	

};

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	return 0;
}
