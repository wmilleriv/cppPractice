#include <iostream>

class Date
{
    public:
        int m_year{};
        int m_month{};
        int m_day{};
};

void printUSDate(const Date& date){
    std::cout << date.m_month << '/' << date.m_day <<'/' << date.m_year;
}

int main(){
    Date date{2025, 4, 16};
    printUSDate(date);

    return 0; 
}
