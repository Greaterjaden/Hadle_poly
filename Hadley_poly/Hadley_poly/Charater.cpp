#include "Charater.h"

Character::Character() {}
Character::Character(string name, int health) {
	cName = name;
	cHealth = health;
}

void Character::setHeath(int health) {
	cHealth = health;
}

void Character::getHeath() {
	return cHealth;
}
void Character::setName(string name) {
	cName = name;
}

void Character::getName() {
	return cName;
}

void Character::printInfo() {
	cout << "my character is named" << cName << "with" << cHealth << "health";

}