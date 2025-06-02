#include <iostream>
#include <string_view>


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
}
String_view decToBin(int d){
    String bin="";
    while(d>0){
        bin+=d%2;
        d=d/2;
    }
    return bin;
}
String_view decToOct(int d){
    String oct="";
    while(d>0){
        oct+=d%8;
        d=d/8;
    }
    return oct;
}
String_view binToDec(String_view d){
    int dec{0};
    return dec;
}
int main(){
    while(true){
        int inputType(menu());
        switch(inputType){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
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
