#include <iostream>
#include <exception>

int getInteger(){
	std::cout << "Enter an integer: ";
	int x{0};
	std::cin >> x;

	return x;
}

char getOperation(){
	std::cout << "Enter an operator (+,-,*,/,%):";
	char op{};
	std::cin >> op;

	return op;
}
int calculate(int x, int y, char op){
	switch(op){
	case '+':
		return x+y;
	case '-':
		return x-y;
	case '*':
		return x*y;
	case '/':
		if(y==0){
			throw 789;
		}
		return x/y;
	case '%':
		return x%y;
	default:
		throw 987;
		return 0;
	}
}
int main()
{
	int x{getInteger()};
	int y{getInteger()};

	char op{getOperation()};
	
	try{
		std::cout << x << op << y <<'=' << calculate(x,y,op) << '\n';
	}catch(int e){
		std::cout << "Esception: " << e <<'\n';
	}
    return 0;
}
