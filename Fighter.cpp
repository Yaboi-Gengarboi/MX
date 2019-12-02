/*
Fighter.cpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 12/2/2019
*/

#include "Include.hpp"
#include "Fighter.hpp"

Fighter::Fighter()
{

}

Fighter::Fighter(string name /*
	double ws, double ds, double rs, double as, 
	double aa, double fs, double ffs, double g, 
	double hh, double jh, double gam, double f,
	unsigned short int w*/)
{
	_name = name;

}

string Fighter::getName()
{
	return _name;
}

unsigned short int Fighter::getWeight()
{
	return _weight;
}