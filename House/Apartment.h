#pragma once

#include"Human.h"
#include<stdarg.h>
#include<iostream>

class Apartment
{
	Human *human;
	int number_apartment;
	int number_of_resident;
public:
	Apartment(int number_apartment, int number_of_resident, Human _human, ...);
	~Apartment();
	void printInfoApartment(int number_apartment);
};