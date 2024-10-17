#pragma once
#include <string>
#include <format>
#include <iostream>
#include "Student.h"

using namespace std;
class Aspirant : private Student{
private:
	bool free_time;
	unsigned int sleep_time : 4;
public:
	Aspirant(uint16_t idet, Name nickname, uint16_t year, uint16_t month, uint16_t day, bool free_time, unsigned int sleep_time);
	using Student::getter_id;
	using Student::getter_Fname;
	using Student::setter_name;
	using Student::setter_date;
	virtual void print_all() override;
};

