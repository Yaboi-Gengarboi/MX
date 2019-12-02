/*
main.cpp
Justyn P. Durnford
Created on 09/23/2019
Last Updated on 12/2/2019
*/


#include "Include.hpp"
#include "Fighter.hpp"
#include "Player.hpp"

int main()
{
	unique_ptr<Fighter> Fox = make_unique<Fighter>("Fox");
	unique_ptr<Player> P1 = make_unique<Player>("Player 1", *Fox);

	cout << (*P1).getFighter().getName() << endl;

	return 0;
}