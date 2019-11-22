/*
Fighter.hpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 11/21/2019
*/

#ifndef FIGHTER_HPP
#define FIGHTER_HPP

#include <string>
using std::string;

class Fighter
{
	// Attributes
	string _name;
	unsigned short int _weight;

	public:
		
		// Returns weight value
		unsigned short int getWeight();
};

#endif