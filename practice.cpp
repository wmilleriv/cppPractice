#include <iostream>
#include <vector>

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    for(int i{0};i<static_cast<int>(arr.size());i++){
	    std::cout << arr[i] << '\n';
    }

    return 0;
}
