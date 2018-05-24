#include "Character.h"
#include <iostream>
#include <string>



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
	cout << "my character is named " << cName << " with " << cHealth << " health. "<< endl;

}

Mage::Mage(){}
Mage::Mage(int H, string N, int M, string S) {
	H = cHealth;
	N = cName;
	M = magicAtk;
	S = spellName;
}

void Mage::setMagicAtk(int M){
	magicAtk = M;

}

int Mage::getMagicAtk() {
	return magicAtk;
}

void Mage::setSpell(string S) {
	spellName = S;
}

string Mage::getSpell() {
	return spellName;
}

void Mage::printInfo() {
	cout << "My Mage is named " << cName << " has " << cHealth << " Health and cast " << spellName << " for " << magicAtk << " damage. "<<endl;
}

Fighter::Fighter(){}
Fighter::Fighter(int H, string N, int A, string AN){
	H = cHealth;
	N = cName;
	A = Atk;
	AN = AtkName;
}

void Fighter::setAtk(int A){
	Atk = A;
}

int Fighter::getAtk() {
	return Atk;
}

void Fighter::setAtkName(string AN) {
	AtkName = AN;
}
string Fighter::getAtkName() {
	return AtkName;
 }

void Fighter::printInfo() {
	cout << "My Fighter is named " << cName << " has " << cHealth << " Health and uses " << AtkName << " for " << Atk << " damage. " << endl;
}