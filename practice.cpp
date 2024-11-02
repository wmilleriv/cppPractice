#include <iostream>

struct Advertisement{
	int watched{0};
	int clicked{0};
	double earnings{0};
};

void printAdInfo(Advertisement ad){
	std::cout << ad.watched << ad.clicked << ad.earnings;
}

int main()
{
	Advertisement ad{3, 34, 15};
	printAdInfo(ad);
	return 0;
}
