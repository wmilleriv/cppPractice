#include <iostream>
#include <vector>
#include <string_view>

std::string getInput(){

    std::string str{};
    std::cout << "Enter a name: ";
    std::cin >> str;
    std::cout << str << " is in the function\n";
    return str;
}

template <typename T>
bool nameFound(const T& value, const std::vector<T>& arr){
    for (const auto& item : arr){
        if(value==item)
            return true;
    }

    return false;
}
        


int main()
{
    std::vector<std::string> names { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    for (auto num : names) // iterate over array fibonacci and copy each value into `num`
       std::cout << num << ' '; // print the current value of `num`

    std::cout << '\n';

    std::string str{getInput()};
    bool test{nameFound(str, names)};
    std::cout << "The string was " << (nameFound(str, names) ? "found" : "not found") << '\n'; 
    return 0;
}
