#include "Aspirant.h"

Aspirant::Aspirant(
	uint16_t idet, Name nickname, uint16_t year, uint16_t month, uint16_t day, bool free_time, unsigned int sleep_time) 
	: Student::Student (idet, nickname, year, month, day),
	free_time{ free_time }, sleep_time{ sleep_time }
{
}

void Aspirant::print_all(){
	Student::print_all();
	cout << format("\nfree time: {}\nsleep time: {}", ((free_time == true) ? "have" : "haven't"), static_cast<unsigned int>(sleep_time));
}

