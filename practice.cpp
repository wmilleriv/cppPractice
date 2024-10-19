#include <iostream>

int main()
{
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <=5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        // note: inner will be created and destroyed at the end of the block
        int inner{5 };
        while (inner >= 1)
		
        {
		if(outer < inner){
            		std::cout  << ' ';
		}
		else{
			std::cout << inner;
		}
            --inner;
        }
	std::cout << '\n';

        // print a newline at the end of each row
        ++outer;

    } // inner destroyed here

    return 0;
}
