#include "pl.h"
#include <iostream>

using namespace std;

int main()
{
	Ninja n;
	Monster m;
	Enemy *e1 = &n;
	Enemy *e2 = &m;

	e1->setAttackPower(20);
	e2->setAttackPower(80);

	n.attack();
	m.attack();
}