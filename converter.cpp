#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <cmath>

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
std::string getHexDigit(int digit){
    switch(digit){
        case 10:
            return "A";
        case 11:
            return "B";
        case 12:
            return "C";
        case 13:
            return "D";
        case 14:
            return "E";
        case 15:
            return "F";
        default:
            return std::to_string(digit);
    }
    return "ERROR";//error
}

void stringToStack(const std::string_view& str, std::vector<char>& stack){
    for(size_t i=0;i<str.length();i++){
        stack.push_back(str[i]);
    }
}


std::string getInputValue(){
    std::cout << "Enter a value to convert: ";
    std::string in{};
    std::cin >> in;
    return in;
}
std::string decToBin(int d){
    std::string bin="";
    while(d>0){
        bin.insert(0,std::to_string(d%2));
        d=d/2;
    }
    return bin;
}
std::string decToOct(int d){
    std::string oct="";
    while(d>0){
        oct.insert(0,std::to_string(d%8));
        d=d/8;
    }
    return oct;
}
std::string decToHex(int d){
    std::string hex="";
    while(d>0){
        hex.insert(0,(getHexDigit(d%16)));
        d=d/16;
    }
    return hex;
}
int binToDec(std::string_view d){
    int dec{0};
    std::vector<char> ss{};//reversed string stack
    stringToStack(d, ss);
    int i{0};
    while(!ss.empty()){
        dec+=(static_cast<int>((ss.back()-'0'))*(static_cast<int>((std::pow(2,i)))));//-'0' to handle ascii conversion
        ss.pop_back();
        i++;
    }
    return dec;
}

int octToDec(std::string_view d){
    int dec{0};
    std::vector<char> ss{};//reversed string stack
    stringToStack(d, ss);
    int i{0};
    while(!ss.empty()){
        dec+=(static_cast<int>((ss.back()-'0'))*(static_cast<int>((std::pow(8,i)))));//-'0' to handle ascii conversion
        ss.pop_back();
        i++;
    }
    return dec;
}
int hexToDec(std::string_view d){
    int dec{0};
    std::vector<char> ss{};
    stringToStack(d, ss);
    int i{0};
    while(!ss.empty()){
        dec+=(static_cast<int>((ss.back()-'0'))*(static_cast<int>((std::pow(16,i)))));//-'0' to handle ascii conversion
        ss.pop_back();
        i++;
    }
    return dec;
}
int main(){
    while(true){
        int inputType(menu());
        if(inputType==5)return 0;
        std::string input{getInputValue()};
        switch(inputType){
            case 1:
                std::cout << "Decimal: " << input << '\n';
                std::cout << "Binary: " << decToBin(stoi(input)) << '\n';
                std::cout << "Octal: " << decToOct(stoi(input)) << '\n';
                std::cout << "Hexadecimal: "<<decToHex(stoi(input)) << '\n';
                break;
            case 2:
                std::cout << "Decimal: " << binToDec(input) << '\n';
                std::cout << "Binary: " << input << '\n';
                std::cout << "Octal: " << decToOct(binToDec(input)) << '\n';
                std::cout << "Hexadecimal: " << '\n';
                break;
            case 3:
                std::cout << "Decimal: " << octToDec(input) << '\n';
                std::cout << "Binary: " <<decToBin(octToDec(input)) << '\n';
                std::cout << "Octal: " << input <<'\n';
                std::cout << "Hexadecimal: " << '\n';
                break;
            case 4:
                std::cout << "Decimal: " << '\n';
                std::cout << "Binary: " << '\n';
                std::cout << "Octal: " << '\n';
                std::cout << "Hexadecimal: " << input << '\n';
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
