/*
Player.hpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 12/2/2019
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Include.hpp"
#include "Fighter.hpp"

class Player
{
	string _name;
	Fighter _fighter;
	unsigned short int actionState;
	double _damage = 0.0;

	public: 

		// Default Constructor
		Player();

		// Primary Constructor
		Player(string name, Fighter& fighter);

		// Returns the player's selected character.
		Fighter getFighter();

		/* Players with damage at or above 100 will experience Rage.
		It has several effects but primarily it increases the knockback
		modifier m by 0.1 (10%). */
		bool rage();

		/* Crouching is an action where the character crouches
		to shorten their hurtbox. Additionally, it reduces the knockback
		modifier m by 0.2 (20%). */
		bool isCrouching();

		// Returns player's damage
		double getDamage();

		// Sets player's damage
		void setDamage(double damage);
};

#endif