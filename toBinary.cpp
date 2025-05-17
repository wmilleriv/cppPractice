#include <iostream>
#include <string>
#include <string_view>
#include <sstream>
#include <algorithm>

int menu(){
    int numType{0};
    std::cout << "------------------------------------------------\n";
    std::cout << "1) Convert a decimal number\n";
    std::cout << "2) Convert a binary number\n";
    std::cout << "3) Convert an octal number\n";
    std::cout << "4) Convert a hexadecimal number\n";
    std::cout << "------------------------------------------------\n";
    std::cout << "5) Quit \n";

    std::cin >> numType;
    return numType;
}
/*int getInput(){
	std::cout << "Please enter a decimal value: ";
	int dec{0};
	std::cin >> dec;

	return dec;
}*/
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
        
		int option{menu()};
	    if(option==5)return 0;
    }

	return 0;
}

