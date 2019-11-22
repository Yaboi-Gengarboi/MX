/*
Player.cpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 11/21/2019
*/

#include "Player.hpp"

Player::Player(const string& name)
{
	_name = name;
}

Fighter Player::getFighter()
{
	return _fighter;
}

bool Player::rage()
{
	if (_damage >= 100)
		return true;
	return false;
}

bool Player::isCrouching(/* const unsigned short int& actionState*/)
{
	return false;
}

double Player::getDamage()
{
	return _damage;
}

void Player::setDamage(double damage)
{
	_damage = damage;
}