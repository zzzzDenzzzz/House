#include "Apartment.h"
#include<ostream>

Apartment::Apartment(int number_apartment, int number_of_resident, Human _human, ...)
{
	this->number_apartment = number_apartment;
	this->number_of_resident = number_of_resident;
	human = new Human[number_of_resident];
	va_list args;
	va_start(args, number_of_resident);
	for (int i = 0; i < number_of_resident; i++)
	{
		human[i] = va_arg(args, Human);
	}
	va_end(args);
}

Apartment::~Apartment()
{
	delete[]human;
}

void Apartment::printInfoApartment(int number_apartment)
{
	std::cout << "Living in apartment number:" << this->number_apartment << " ";
	std::cout << number_of_resident << " humans.\n";
	for (int i = 0; i < number_of_resident; i++)
	{
		std::cout << "Id: " << this->human[i]._getID() << std::endl;
		std::cout << "Surname: " << this->human[i].getSurname() << std::endl;
	}
	std::cout << std::endl;
}
