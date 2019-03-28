#pragma once
#include <iostream>

using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
		cout << "Ninja! -" << attackPower << endl;
	}
};
class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "Monster! -" << attackPower << endl;
	}
};