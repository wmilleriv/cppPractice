#include <iostream>
#include <string>
#include <string_view>


int menu(){

    int choice{0};
    
    std::cout << "----------------------------------------------------\n";
    std::cout << "1) Convert from decimal\n";
    std::cout << "2) Convert from binary\n";
    std::cout << "3) Convert from octal\n";
    std::cout << "4) Convert from hexadecimal\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "5) Exit the program\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "Please choose a numbering system for input:\n";
    
    std::cin >> choice;
    
    return choice;
}
std::string_view getInputValue(){
    std::cout << "Enter a value to convert: ";
    std::string in{};
    std::cin >> in;
    return in;
}
std::string_view decToBin(int d){
    std::string bin="";
    while(d>0){
        bin+=static_cast<char>(d%2);
        d=d/2;
    }
    return bin;
}
std::string_view decToOct(int d){
    std::string oct="";
    while(d>0){
        oct+=static_cast<char>(d%8);
        d=d/8;
    }
    return oct;
}
int binToDec(std::string_view d){
    int dec{0};

    return dec;
}
int main(){
    while(true){
        int inputType(menu());
        std::string_view input{getInputValue()};
        switch(inputType){
            case 1:
                std::cout << "Decimal: " << input << '\n';
                std::cout << "Binary: " << '\n';
                std::cout << "Octal: " << '\n';
                std::cout << "Hexaecimal: " << '\n';
                break;
            case 2:
                std::cout << "Decimal: " << '\n';
                std::cout << "Binary: " << input << '\n';
                std::cout << "Octal: " << '\n';
                std::cout << "Hexaecimal: " << '\n';
                break;
            case 3:
                std::cout << "Decimal: " << '\n';
                std::cout << "Binary: " << '\n';
                std::cout << "Octal: " << input <<'\n';
                std::cout << "Hexaecimal: " << '\n';
                break;
            case 4:
                std::cout << "Decimal: " << '\n';
                std::cout << "Binary: " << '\n';
                std::cout << "Octal: " << '\n';
                std::cout << "Hexaecimal: " << input << '\n';
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid Selection\n";
                return -1;
        }
    }
    return 0;
}
