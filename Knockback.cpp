/*
Knockback.cpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 11/21/2019
*/

const double pi = 3.1415926535897;

#include <cmath>
using std::sin;
using std::cos;
using std::ceil;

#include "knockback.hpp"
#include "Player.hpp"

double knockback(const Hitbox& hb, Player& p1, Player& p2)
{
	double kb = 0.0;
	double m = 1.0;
	
	if (p1.rage())
		m += 0.1;
	if (p2.isCrouching())
		m -= 0.2;

	kb = 2 * p1.getDamage() + p1.getDamage() * hb.damage;
	kb *= (300 / (p2.getFighter().getWeight() + 100));
	kb *= hb.kb_growth;
	kb += hb.kb_base;
	kb *= m;

	return kb;
}

unsigned int hitstun(const Hitbox& hb, double kb)
{
	unsigned int hs = (int)ceil(kb * 0.4);
	if (hs < 5)
		hs = 5;
	hs += hb.hitstunModifier;
	return hs;
}

int hitlag() //Attack a
{
	int hl = 0;
	//hl = (int)ceil((a.getDamage() *= 0.5) + 3);
	//hl += a.getHitlagModifier();
	return hl;
}

/* This is the standard method of applying velocity to a player 
with knockback. The value determined by knockback will */
void setInitialVelocity(double kb) //Attack a
{
	//double angle = a.getAngle() * pi / 180.0;
	//double x = 0.03 * kb * cos(angle);
	//double y = 0.03 * kb * sin(angle);
}

/* This is an alternative way of applying velocity to a player by
giving specific x and y values. */
void setInitialVelocity(double x, double y)
{

}