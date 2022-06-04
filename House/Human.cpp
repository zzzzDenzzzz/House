#include "Human.h"

void Human::printInfoHuman()
{
	std::cout << "Id: " << ID << std::endl;
	std::cout << "Surname: " << surname << std::endl;
}

Human::Human()
{
	ID = id;
	surname = "no_surname";
	getId();
}

Human::Human(std::string surname) : Human()
{
	this->surname = surname;
}

int Human::getId()
{
	return id++;
}

int Human::_getID()
{
	return ID;
}

void Human::setSurname(std::string surname)
{
	this->surname = surname;
}

std::string Human::getSurname()
{
	return surname;
}

int Human::id{ 0 };