#ifndef HITBOX_HPP
#define HITBOX_HPP

#include "Fighter.hpp"

/*

*/
struct Hitbox
{
	//Knockback values
	double damage;
	int kb_base;
	int kb_growth;
	int kb_wd;
	double angle;

	//Modifiers
	int hitstunModifier;
	int hitlagModifier;

	//Location values
	int x_off;
	int y_off;
	int z_off;

	//Remaining things:
	//Character-relative location
	//Shape and size

};

#endif