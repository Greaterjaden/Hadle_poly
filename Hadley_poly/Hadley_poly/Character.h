#ifndef CHARACTER_H
#define CHARACTER_H

#include <Iostream>

#include <string>

using namespace std;

class Character {
public:
	Character();
	Character(string, int);
	string getName();
	void setName(string);
	int getHeath();
	void setHeath(int);
	void printInfo();

protected:
	string cName;
	int cHealth;
};

class Mage : public Character {

public:
	Mage();
	Mage(int, string, int, string);
	string getSpell();
	void setSpell(string);
	int getMagicAtk();
	void setMagicAtk(int);
	void printInfo();
private:
	int magicAtk;
	string spellName;
};

class Fighter :public Character {
public:
	Fighter();
	Fighter(int,string,int,string);
	string getAtkName();
	void setAtkName(string);
	int getAtk();
	void setAtk(int);
	void printInfo();
private:
	int Atk;
	string AtkName;
	
};

#endif
