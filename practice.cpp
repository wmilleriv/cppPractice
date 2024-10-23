// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>
#include <limits>

bool isPrime(int x)
{	

	if(x==2)
		return true;
	if(x<=1 ||  x%2== 0)
		return false;
	if(x<9)
		return true;
	for(int f{3};f*f<=x;f+=2){
		if(x%f==0)
			return false;
	}

    return true;
}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));


    std::cout << "Success!\n";

    for(int x{13419};x<=std::numeric_limits<int>::max();x+=2){
	 if(isPrime(x)){
		 std::cout << x << " is prime\n";
	}
    }

	 return 0;
}
