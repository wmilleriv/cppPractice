#include <iostream>

double k{1};
double pi{0};

int main(){
    for(int i{0};i<1000000;i++){
        if(i%2 ==0){
            pi+=4/k;
        }else{
            pi-=4/k;
        }
        k+=2;
    }
    std::cout << pi << '\n';
    return 0;
}
