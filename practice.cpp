#include <iostream>


int getInteger(){
	int x{0};
	std::cout << "Enter an integer: \n";
	std::cin >> x;

	return x;
}


constexpr bool isEven(int num){
	if(num==1 || num%2!=0)
		return false;
	return true;

}

int main()
{
	int x{getInteger()};
	std::cout << x << " is " << (isEven(x) ? "even" : "odd") << '\n';
	return 0;
}
