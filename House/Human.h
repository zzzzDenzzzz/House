#pragma once

#include<iostream>
#include<string>

class Human
{
	static int id;
	int ID;
	std::string surname;
public:
	Human();
	Human(std::string surname);
	static int getId();
	int _getID();
	void setSurname(std::string surname);
	std::string getSurname();
	void printInfoHuman();
};