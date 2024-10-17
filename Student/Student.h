#pragma once
#include <cstdint>
#include <Windows.h>
#include <string>


using namespace std;

#pragma region Data_classes

class Name {
public:
	string fullName;
	string name;
	string surname;
	string middle_name;

	Name(string name, string surname, string middle_name);
	Name(string fullname);
	Name(const Name& other);

	Name& operator=(const Name& other);
	string display();
};


class Date {
private:

public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day);
	Date();
	void Set_Date();

	string display();

};
#pragma endregion
class Student {
private:

protected:
	uint16_t id;
	Name data_of_name;
	Date data_of_date;


public:

	Student(uint16_t idet, Name nickname, uint16_t year, uint16_t month, uint16_t day);
	Student();
	Name getter_Fname();
	uint16_t getter_id();
	string getter_date();
	uint8_t generete_age_for_person() {
		return 8 + rand() % (60);
	}
	void setter_name(Name new_name);
	void setter_date();
	virtual void print_all();
	//~Student();
};
