#include <iostream>
#include <string_view>

enum MonsterType{
	ogre,
	dragon,
	orc,
	spider,
	slime,
};

struct Monster{
	std::string_view name{"UNDEFINED"};
	int health{100};
	MonsterType type{};
};

void printMonster(Monster mon){
	std::cout << "The " << mon.type << " is named " << mon.name << " and has " << mon.health << " health.\n";
}

int main(){

	Monster mon{"Cow",1000000,dragon};
	printMonster(mon);
	return 0;
}
