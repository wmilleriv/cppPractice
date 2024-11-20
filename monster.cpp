#include <iostream>
#include <string>
#include <string_view>

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

		Type m_type{};
		std::string m_name{};
		std::string m_roar{};
		int m_hitPoints{};
	public:
		Monster(Type t, std::string_view name, std::string_view roar,  int hp)
			:m_type{t}, m_name{name}, m_roar{roar}, m_hitPoints{hp}
		{}

		void print(){
			std::cout << m_name  << " the  " << "hold" << " has " << m_hitPoints << " and says " << m_roar << '\n';
		}

};

int main(){
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();
	return 0;
}
