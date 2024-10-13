#include <iostream>

int getInteger(){
	std::cout << "Enter an integer: ";
	int num{0};
	std::cin >> num;

	return num;
}

void swapPrint(int x, int y){
	if(x<y){
		int hold{x};
		x=y;
		y=hold;
	}

	std::cout << "The smaller value is " << y <<'\n';
	std::cout << "The larger value is " << x <<'\n';
}

int main(){

	int x{getInteger()};
	int y{getInteger()};
	swapPrint(x,y);
	return 0;
}
