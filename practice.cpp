#include <iostream>
#include <vector>
#include <string_view>

const std::string getInput(){

    std::string str{};
    std::cout << "Enter a name: ";
    std::cin >> str;
    return str;
}

bool nameFound(std::string str, std::vector<std::string> names){

    for (auto name : names){
        if(name==str)
            return true;
    }

    return false;
}
        


int main()
{
    std::vector names { "Alex", "Betty", "Caoline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    for (auto num : names) // iterate over array fibonacci and copy each value into `num`
       std::cout << num << ' '; // print the current value of `num`

    std::cout << '\n';

    const std::string_view str{getInput()};

    std::cout << "The string was " << (nameFound ? "found" : "not dound") << '\n'; 
    return 0;
}
