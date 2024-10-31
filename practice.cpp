#include <iostream>
#include <algorithm>
namespace Monster{ 
	enum monsterType{
		orc,
		goblin,
		troll,
		ogre,
		skeleton,
	};
}
void sort2(int& x, int& y){
	if(y>x){
		std::swap(x,y);
	}
}

int main()
{
    int x { 7 };
    int y { 5 };
	[[maybe_unused]]Monster::monsterType mon{Monster::troll};
    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
