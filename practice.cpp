#include <iostream>
#include <vector>

template <typename T>
T getUserInput(){
	T in{0};
	std::cout << "Enter a value: ";
	std::cin >> in;
	return in;
}

template <typename T>
bool isInArray(const std::vector<T> arr, T item)
{
	for(int i{0};i<arr.size();i++){
		if(arr[i]==item)
			return true;
	}
	return false;
}

template <typename T>
void printArray(const std::vector<T> arr){


    for(int i{0};i<static_cast<T>(arr.size());i++){
    	std::cout << arr[i] << '\n';
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr);

    twmplate <typename T>
    T x{getUserInput()};

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
