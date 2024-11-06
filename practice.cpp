#include <iostream>

// Provide the definition for IntPair and the print() member function here

class IntPair{

	private:
		int m_p1{0};
		int m_p2{0};

		

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
