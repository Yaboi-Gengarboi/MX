#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player
{
	std::string nametag;
	double damage;

	/* Players with damage at or above 100 will experience Rage.
	It has several effects but primarily it increases the knockback
	modifier m by 0.1 (10%). */
	bool rage();

	/* Crouching is an action where the character crouches
	to shorten their hurtbox. Additionally, it reduces the knockback
	modifier m by 0.2 (20%). */
	bool isCrouching();
};

#endif