#include <iostream>


class Monster{
	public:

	enum Type{
		dragon, 
		goblin, 
		ogre, 
		orc, 
		skeleton, 
		troll, 
		vampire,
       		zombie,
		maxMonsterTypes,
	};
	private:

		Type m_type{maxMonsterTypes};
		std::string m_name{"bitch boy"};
		std::string m_roar{"uWuWuWuW"};
		int m_hitPoints{100};
	public:
		Monster(Type t, std:string name, std::string roar,  int hp)
			:m_type{t}, m_name{name}, m_roar{roar}, m_hitPoints{hp}
		{}

};

int main(){
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };	
	return 0;
}
