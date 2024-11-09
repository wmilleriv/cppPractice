#include <iostream>

class Ball{

	private:
		double m_radius{10.0};
		std::string m_color{"black"};

	public:
		Ball()
			:Ball{"black", 10.0}{}
		Ball(std::string color)
			:Ball{color, 10.0}{}
		Ball(double radius)
			:Ball{"black", radius}{}
		Ball(std::string color, double radius)
		:m_color{color}, m_radius{radius}{}

		std::string getColor(){
	    		return m_color;
    		}

		double getRadius(){
			return m_radius;
		}
};

		void print(Ball& b){
			std::cout<< "Ball(" << b.getColor() << ", " << b.getRadius() <<")\n";
		}	

int main()
{
    Ball def{};
    print(def);
    Ball blue{ "blue" };
    print(blue);
    Ball twenty{ 20.0 };
    print(twenty);
    Ball blueTwenty{ "blue", 20.0 };
    print(blueTwenty);

    return 0;	

	return 0;
}
