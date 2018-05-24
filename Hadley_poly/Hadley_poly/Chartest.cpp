
#include "Character.h"



void main() 
{
	Character monster;
	Mage mage1;

	monster.setName("brandon");
	monster.setHeath(100);
	monster.printInfo();

	mage1.setName("John");
	mage1.setHeath(100);
	mage1.setSpell("fire");
	mage1.setMagicAtk(10);
	mage1.printInfo();

	system("pause");
}