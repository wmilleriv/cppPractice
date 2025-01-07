#include <iostream>
#include <vector>
#include <string_view>

std::string_view getInput(){

    std::string str{};
    std::cout << "Enter a name: ";
    std::cin >> str;
    std::cout << str << " is in the function\n";
    return str;
}

bool nameFound(std::string_view str, std::vector<std::string> names){
    std::cout << "here\n";
    for (std::string_view name : names){
        //std::cout << name << " " << str << '\n';
        if(name==str)
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

    std::string_view str{getInput()};
    std::cout<<str << " is main\n";
    bool test{nameFound(str, names)};
    std::cout << "The string was " << (nameFound(str, names) ? "found" : "not found") << '\n'; 
    return 0;
}
