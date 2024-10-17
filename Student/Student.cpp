#include <iostream>
#include <string>
#include <cstring>

#include "Student.h"
using namespace std;


#pragma region Constructors
Student::Student(uint16_t idet, Name nickname, uint16_t year, uint16_t month, uint16_t day) : id{ idet }, data_of_name(nickname), data_of_date{ year, month, day } {
}



Student::Student() : Student::Student(0, { "", "", "" }, 0, 0, 0) {
	cout << "created zero guy";
}
#pragma endregion


#pragma region Functions
Name Student::getter_Fname() {
	return data_of_name;
}

uint16_t Student::getter_id() {
	return id;
}

string Student::getter_date() {
	string result = "";
	result += to_string(data_of_date.year) + '.';
	result += to_string(data_of_date.month) + '.';
	result += to_string(data_of_date.day) + '.';
	return result;
}


void Student::setter_name(Name new_name) { data_of_name = new_name; }
//void Person::setter_name() {/*
	//cout << "Name: ";
	/*cin >> data_of_name.name;
	cout << "Surname: ";
	cin >> data_of_name.surname;
	cout << "Middle name: ";
	cin >> data_of_name.middle_name;
}*/

void Student::setter_date() {
	cout << "Year: ";
	cin >> data_of_date.year;
	cout << "Month: ";
	cin >> data_of_date.month;
	cout << "Day: ";
	cin >> data_of_date.day;
}

void Student::print_all() {
	cout << "\nid: " << id << "\nName: " << data_of_name.name << "\nSurname: " << data_of_name.surname << "\nMiddle name: " << data_of_name.middle_name << "\nday: " << data_of_date.day << "\nmonth: " << data_of_date.month << "\nyear: " << data_of_date.year;
}
#pragma endregion


//Student::~Student() {
//
//}

Date::Date(int year, int month, int day) : year{ year }, month{ month }, day{ day } {}

Date::Date() : Date(0, 0, 0) {}

void Date::Set_Date() {
	std::cout << "Write year: ";
	std::cin >> this->year;
	std::cout << "Write month: ";
	std::cin >> this->month;
	std::cout << "Write day: ";
	std::cin >> this->day;

}

std::string Date::display() {
	std::string result = " date: " + std::to_string(year) + '.' + std::to_string(month) + '.' + std::to_string(day);
	return result;
}

Name::Name(std::string name, std::string surname, std::string middle_name) : name{ name }, surname{ surname }, middle_name{ middle_name } {}

Name::Name(string fullname) : fullName{fullname}, name{0}, surname{0}, middle_name{0}
{
}

Name::Name(const Name& other) : name(other.name), surname(other.surname), middle_name(other.middle_name) {}

Name& Name::operator=(const Name& other) {
	if (this == &other) return *this;
	name = other.name;
	surname = other.surname;
	middle_name = other.middle_name;
	return *this;
}

std::string Name::display() {
	std::string result = " Name: " + name + " Surname: " + surname + " Middle name: " + middle_name;
	return result;
}
