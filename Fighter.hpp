/*
Fighter.hpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 12/2/2019
*/

#ifndef FIGHTER_HPP
#define FIGHTER_HPP

#include "Include.hpp"

class Fighter
{
	// Identifiers
	string _name = "NULL";

	// Attributes
	double _walkSpeed = -1.0;
	double _dashSpeed = -1.0;
	double _runSpeed = -1.0;
	double _airSpeed = -1.0;
	double _airAcceleration = -1.0;
	double _fallSpeed = -1.0;
	double _fastFallSpeed = -1.0;
	double _gravity = -1.0;
	double _hopHeight = -1.0;
	double _jumpHeight = -1.0;
	double _groundToAirMultiplier = -1.0;
	double _friction = -1.0;
	double _airFriction = -1.0;
	unsigned short int _weight = 0;

	public:
		// Default Constructor
		Fighter();
		// Primary Constructor
		Fighter(string name /*unsigned short int ID, 
			double ws, double ds, double rs, double as,
			double aa, double fs, double ffs, double g,
			double hh, double jh, double gam, double f,
			unsigned short int w*/); 
		// Returns name
		string getName();
		// Returns weight value
		unsigned short int getWeight();
};

#endif