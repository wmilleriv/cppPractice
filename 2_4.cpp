#include <iostream>

int getInput(){
    int n{0};
    std::cout << "Enter a number: ";
    std::cin >> n;

    return n;
}

int doubleNumber(int n){

    return(n*2);
}

int main(){
    int n{getInput()};
    std::cout << n << " doubled is: " << doubleNumber(n) << '\n';
    return 0;
}
