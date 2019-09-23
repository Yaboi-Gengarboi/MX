/*
Players with damage at or above 100 will experience Rage.
It has several effects but primarily it increases the knockback
modifier m by 0.1 (10%).
*/
bool rage()
{
	//if (damage >= 100.0)
		//return true;
	return false;
}

/*
Crouching is an action state in which the character crouches
to shorten their hurtbox. Additionally, it reduces the knockback
modifier m by 0.2 (20%).
*/
bool isCrouching()
{
	//if (getActionState() == "crouch")
		//return true;
	return false;
}