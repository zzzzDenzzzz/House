#include"Human.h"
#include"Apartment.h"
#include"House.h"
#include<iostream>

int main()
{
	Human h_0, h_1("Petrov"), h_2, h_3, h_4, h_5("Putin"), h_6, h_7, h_8("Stern");
	h_0.setSurname("Ivanov");
	h_0.printInfoHuman();
	h_1.printInfoHuman();
	h_6.printInfoHuman();
	std::cout << std::endl;

	Apartment a_1(1, 2, h_0, h_2), a_2(2, 3, h_1, h_3, h_5);
	a_1.printInfoApartment(1);
	a_2.printInfoApartment(2);

	Apartment a_3(3, 4, h_4, h_6, h_7, h_8);
	a_3.printInfoApartment(3);

	return 0;
}