#include <iostream>
#include <string>
#include "Student.h"
#include "Aspirant.h"
using namespace std;

int main() {
	Aspirant asp(34, string("nicimouse"), 2024, 10, 17, false, 8);
	asp.print_all();

	//Student st(35, string("MIXICK_MOUSE"), 2024, 10, 17);
	//st.print_all();


	return 0;
}