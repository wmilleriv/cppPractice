#include <iostream>

int main(){
    for(int i{0};i<10;i++){
        for(int j{9};j>=0;j--){
            if(j<=i)
                std::cout << j << ' ';
            else
                std::cout << "  ";
        }
        std::cout << '\n';
    }
       
    return 0;
}
