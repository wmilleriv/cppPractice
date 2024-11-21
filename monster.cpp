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
		constexpr std::string_view getType(Type t){
			switch(t){
				case dragon:return "dragon";
				case goblin:return "goblin";
				case ogre:return "ogre";
				case orc: return "orc";
				case skeleton:return "skeleton";
				case troll:return "troll";
				case vampire:return "vampire";
				case zombie:return"zombie";
				case maxMonsterTypes:
				default:
					    return"oh shit!";


			}
		}

		void print(){
			std::cout << m_name  << " the " << getType(m_type) << " has " << m_hitPoints << " hitpoints and says " << m_roar << '\n';
		}

		std::string_view getName(int name)
		{
			return "";
		}
		std::string_view getRoar(int roar){
			return "";
		}

};

int main(){
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();
	return 0;
}
