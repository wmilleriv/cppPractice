#include <iostream>

int menu(){

    int choice{0};
    
    std::cout << "----------------------------------------------------\n";
    std::cout << "1) Convert from ecimal\n";
    std::cout << "2) Convert from binary\n";
    std::cout << "3) Convert from octal\n";
    std::cout << "4) Convert from hexadecimal\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "5) Exit the program\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "Please choose a numbering system for input:\n";
    
    std::cin >> choice;
    
    return choice;


int main(){
    while(true){
        menu()
    return 0;
}
