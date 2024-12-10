#include <iostream>
#include <vector>

int getUserInput(){
	int in{0};
	std::cout << "Enter a value: ";
	std::cin >> in;
	return in;
}
bool isInArray()
{
	return 0;
}

void printArray(const std::vector<int> arr){


    for(int i{0};i<static_cast<int>(arr.size());i++){
    	std::cout << arr[i] << '\n';
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr);

    return 0;
}
