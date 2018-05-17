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
}

#endif
