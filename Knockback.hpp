/*
Knockback.hpp
Justyn P. Durnford
Created on 11/21/2019
Last updated on 12/2/2019
*/

#ifndef KNOCKBACK_HPP
#define KNOCKBACK_HPP

#include "Include.hpp"
#include "Hitbox.hpp"
#include "Player.hpp"

/* This function is an essential component of the game that primarily
determines the force Player Y will experience when hit by an attack
from Player X. The velocity set to a player is a bit lower, but Hitstun
will be determined by this formula, so it is important to keep them seperate. */
double knockback(const Hitbox& hb, Player& p1, Player& p2);

/* Hitstun is the period of time, in frames, where a player is unable
to act after being hit by an attack as they are launched. It is directly
proportional to knockback. */
unsigned int hitstun(const Hitbox& hb, double kb);

/* Hitlag is the period of time, in frames, where both the player who
dealt an attack and who was attacked are frozen in place before the attacked is
launched. It is directly proportional to damage. */
unsigned int hitlag(const Hitbox& hb);

/* This is the standard method of applying velocity to a player
with knockback. The value determined by knockback will be adjusted
to set x and y values for movement. */
void setInitialVelocity(const Hitbox& hb, double kb);

/* This is an alternative way of applying velocity to a player by
giving specific x and y values. */
void setInitialVelocity(double x, double y);

#endif