#include <iostream>
#include <string>
#include <string_view>
#include <sstream>
#include <algorithm>

int menu(){
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
int getInput(){
	std::cout << "Please enter a decimal value: ";
	int dec{0};
	std::cin >> dec;

	return dec;
}
std::string decToBinary(int dec){
	
	std::ostringstream oss;
	while(dec>=1)
	{
		int bit{dec%2};
		//std::cout<< bit << " HEEEEEEE "  << static_cast<std::string>(bit) << '\n';
		oss << bit;
		dec/=2;
	}
	std::string str{oss.str()};
	std::reverse(str.begin(), str.end());
	return str;
}


int main(){
	while(true)
	{
		int dec{getInput()};
		std::cout << decToBinary(dec) << '\n';
	}
	return 0;
}

