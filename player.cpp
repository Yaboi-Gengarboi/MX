/*
Player.cpp
Justyn P. Durnford
Created on 12/2/2019
Last Updated on 12/2/2019
*/

#include "Include.hpp"
#include "Player.hpp"
#include "Fighter.hpp"

#include <string>
using std::string;

Player::Player()
{

}

Player::Player(string name, Fighter& fighter)
{
	_name = name;
	_fighter = fighter;
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

bool Player::isCrouching()
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