#include <iostream>
#include <vector>
#include <string_view>

std::string getInput(){

    std::string str{};
    std::cout << "Enter a name: ";
    std::cin >> str;
    return str;
}

int main()
{
    std::vector names { "Alex", "Betty", "Caoline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    for (auto num : names) // iterate over array fibonacci and copy each value into `num`
       std::cout << num << ' '; // print the current value of `num`

    std::cout << '\n';

    return 0;
}
