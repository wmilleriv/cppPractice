#include <iostream>
#include <vector>

int getUserInput(){
	int in{0};
	std::cout << "Enter a value: ";
	std::cin >> in;
	return in;
}
bool isInArray(const std::vector<int> arr, int item)
{
	for(int i{0};i<arr.size();i++){
		if(arr[i]==item)
			return true;
	}
	return false;
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

    int x{getUserInput()};

    if(isInArray(arr, x))
	{
		std::cout << "yes";
	}
	else
	{
	std::cout << "no";
	}


    return 0;
}
