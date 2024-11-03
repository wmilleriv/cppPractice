#include <iostream>

struct Fraction{
	int numerator{0};
	int denominator{1};
};

Fraction getFraction(){

	Fraction f{};
       	std::cout << "Enter the value of the numerator: ";
	std::cin >> f.numerator;
	std::cout << "Enter the value of the denominator: ";
	std::cin >> f.denominator;
	return f;
}

constexpr Fraction operator*(Fraction& x, Fraction& y){
	return {x.numerator*y.numerator, x.denominator*y.denominator};	
}

std::ostream& operator<<(std::ostream& out, Fraction& f){
	return out<<f.numerator << '/' << f.denominator;
}

int main()
{
	Fraction x{getFraction()};
	Fraction y{getFraction()};

	Fraction product{x*y};
	std::cout << x << '*' << y <<'=' << product << '\n';	
	
	return 0;
}
