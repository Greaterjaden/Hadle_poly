
#include "Character.h"



void main() 
{
	Character monster;
	Mage mage1;
	Fighter fighter1;

	monster.setName("brandon");
	monster.setHeath(100);
	monster.printInfo();

	mage1.setName("John");
	mage1.setHeath(100);
	mage1.setSpell("fire");
	mage1.setMagicAtk(10);
	mage1.printInfo();

	fighter1.setName("Mike");
	fighter1.setHeath(100);
	fighter1.setAtkName("Slash");
	fighter1.setAtk(10);
	fighter1.printInfo();

	system("pause");
}