#include <cmath>
using std::cos;
using std::sin;
const double pi = 3.1415926535897;

/*
This function is an essential component of the game that primarily
determines the force Player Y will experience when hit by an attack
from Player X. The velocity set to a player is a but lower, but Hitstun
will be determined by this formula, so it is important to keep them seperate.
*/
double knockback(double p, double d, int w, int s, int b) //, Player X, Player Y
{
	double kb = 0.0;
	double m = 1.0;
	//if (X.rage())
		//m += 0.1;
	//if (Y.isCrouching())
		//m -= 0.2;
	kb = (((2 * p + p * d) / 20) * (300 / (w + 100)) * s + b) * m;
	return kb;
}

int hitstun(double kb) //Attack a
{
	int hs = 0;
	hs = (int)ceil(kb * 0.385);
	//hs += a.getHistunModifier();
	return hs;
}

int hitlag() //Attack a
{
	int hl = 0;
	//hl = (int)ceil((a.getDamage() *= 0.5) + 3);
	//hl += a.getHitlagModifier();
	return hl;
}

/*
This is the standard method of applying velocity to a player with
knockback. The value determined by knockback will 
*/
void setInitialVelocity(double kb) //Attack a
{
	//double angle = a.getAngle() * pi / 180.0;
	//double x = 0.03 * kb * cos(angle);
	//double y = 0.03 * kb * sin(angle);
}

/*
This is an alternative way of applying velocity to a player by
giving specific x and y values.
*/
void setInitialVelocity(double x, double y)
{
	
}