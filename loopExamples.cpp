#include <iostream>

int main(){
    for(int i{0};i<10;i++){
        for(int j{0};j<=i; j++){
            std::cout << j << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
