#include <iostream>
#include <iomanip>

long double k{1};
long double  pi{0};

int main(){
    for(int i{0};i<10000000;i++){
        if(i%2 ==0){
            pi+=4/k;
        }else{
            pi-=4/k;
        }
        k+=2;
    }
    std::cout << std::setprecision(15)<< pi << '\n';
    return 0;
}
