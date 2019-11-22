/*
Hitbox.hpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 11/21/2019
*/

#ifndef HITBOX_HPP
#define HITBOX_HPP

/*

*/
struct Hitbox
{
	// Knockback values
	double damage;
	int kb_base;
	int kb_growth;
	int kb_wd;
	double angle;

	// Modifiers
	int hitstunModifier;
	int hitlagModifier;

	// Location values
	int x_off;
	int y_off;
	int z_off;

	//Remaining things:
	//Character-relative location
	//Shape and size

};

#endif