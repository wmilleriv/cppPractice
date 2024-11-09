#include <iostream>

class Ball{

	private:
		double m_radius{0};
		std::string m_color{"clear"};

	public:
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
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}
