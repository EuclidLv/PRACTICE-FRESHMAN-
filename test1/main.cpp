#include <iostream>
#include "LNode_T_H.h"

int main()
{
	{
		Student_inf s1{ "Wang Sihan",48,130,125,148 };
		s1.Print_inf();
		Student_inf s2 = Student_inf{ "Abc",51,119,130,130 };
		s2.Print_inf();
		Student_inf s3("Bcd", 47, 130, 123, 134);
		s3.Print_inf();
		Student_inf s4 = Student_inf("Cde", 45, 134, 136, 145);
		s4.Print_inf();
	}
	return 0;
}