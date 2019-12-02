/*
Knockback.cpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 12/2/2019
*/

#include "Include.hpp"
#include "Knockback.hpp"
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

unsigned int hitlag(const Hitbox& hb)
{
	int hl = 0;
	hl = (int)ceil((hb.damage * 0.5) + 3);
	if (hl < 5)
		hl = 5;
	hl += hb.hitlagModifier;
	return hl;
}

void setInitialVelocity(const Hitbox& hb, double kb)
{
	double angle = hb.angle * pi / 180.0;
	double x = 0.03 * kb * cos(angle);
	double y = 0.03 * kb * sin(angle);
}

void setInitialVelocity(double x, double y)
{

}