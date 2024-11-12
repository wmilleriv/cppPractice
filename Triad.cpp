#include <iostream>
#include <string>

template<typename T, typename U, typename V>
class Triad{
	private:
		T m_first{};
		U m_second{};
		V m_third{};

	public:
		Triad(const T& i, const U& j, const V& k)
			:m_first{i}, m_second{j}, m_third{k}
		{}
		
		const T& first() const{
			return m_first;
		}

		const U& second()const{
			return m_second;
		}
		const V& third() const{
			return m_third;
		}

		void print()const{
			std::cout << '[' << m_first << ',' << m_second << ',' << m_third << "]\n";
		} 	
};

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
