#include <iostream>

int getInput(){
    
    int in{0};

    std::cout << "Enter a number: ";
    std::cin >> in;

    return in;
}

int main(){
    int x{getInput()};
    int y{getInput()};

    std::cout << x << " + " << y << " = " << x+y << '\n';
    std::cout << x << " - " << y << " = " << x-y << '\n';

    return 0;
}
