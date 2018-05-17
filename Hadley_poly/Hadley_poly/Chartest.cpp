#include <iostream>
#include <string>
#include "Charater.h"

using namespace std;

void main() {
	Character monster;

	monster.setName("brandon");
	monster.setHeath(100);

	monster.printInfo();

	system("pause");
}