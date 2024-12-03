#include <iostream>
#include <vector>

// Write your printElement function here
template<typename T>
void printElement(const std::vector<T>& v, int i){
	if(i<0 || i>= static_cast<int>(v.size())){
			std::cout << "Invalid Index\n";
		}
	else{
		std::cout << v[i] << '\n';
	}
}

int main()
{
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}
