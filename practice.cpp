#include <iostream>
#include <vector>


int main(){

	std::vector<char> hello{'h', 'e', 'l', 'l', '0'};

	std::cout << "The array has " << std::size(hello) << " characters\n";
	return 0;
}
