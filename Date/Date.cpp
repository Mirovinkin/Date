// MyDate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class PersonalDate
{

public:
    int _year;
    int _month;
    int _day;
    PersonalDate(const int& Year, const int& Month, const int& Day) : _year(Year), _month(Month), _day(Day) {};

    int GetYear() {
        return _year;
    }

    void SetYear(const int& Year) {
        _year = Year;
    }

    int GetMonth() {
        return _month;
    }

    void SetMonth(const int& Month) {
        _year = Month;
    }

    int GetDay() {
        return _day;
    }

    void SetDay(const int& Day) {
        _year = Day;
    }


    PersonalDate operator - (const PersonalDate& date1) {
        long long TotalDays1 = 0;
        long long TotalDays2 = 0;
        long long TotalDifference = 0;
        TotalDays1 = _year * 365 + _month + _day;
        TotalDays2 = date1._year * 365 + _month + _day;
        TotalDifference = TotalDays1 - TotalDays2; //Просто перегорузка оператора без полной проверки даты
        return PersonalDate(TotalDifference, 0, 0);
    }

    PersonalDate operator+(const int& AdditionalDays) {
        return PersonalDate(0, 0, this->_day += AdditionalDays);
    }
};


int main()
{
    std::cout << "Hello World!\n";
}