#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character() {}
Character::Character(string name, int health) {
	cName = name;
	cHealth = health;
}

void Character::setHeath(int health) {
	cHealth = health;
}

int Character::getHeath() {
	return cHealth;
}
void Character::setName(string name) {
	cName = name;
}

 string Character::getName() {
	return cName;
}

void Character::printInfo() {
	cout << "my character is named" << cName << "with" << cHealth << "health";

}
