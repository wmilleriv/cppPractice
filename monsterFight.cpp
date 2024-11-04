#include <iostream>
#include <string_view>

enum monsterType{
	ogre,
	dragon,
	orc,
	spider,
	slime,
};

struct Monster{

	enum monsterType{
		ogre,
		dragon,
		orc,
		spider,
		slime,
	};

	std::string_view name{"UNDEFINED"};
	int health{100};
	monsterType type{};
};

constexpr std::string_view getMonsterType(Monster::monsterType type){
	switch(type)
	{
		case Monster::ogre: return "ogre";
		case Monster::dragon: return "dragon";
		case Monster::orc: return "orc";
		case Monster::spider: return "giant spider";
		case Monster::slime: return "slime";
		default: return "UNDEFINED";
	}
}

void printMonster(Monster mon){
	std::cout << "The " << getMonsterType(mon.type) << " is named " << mon.name << " and has " << mon.health << " health.\n";
}

int main(){

	Monster mon{"Cow",1000000,Monster::dragon};
	printMonster(mon);
	return 0;
}
