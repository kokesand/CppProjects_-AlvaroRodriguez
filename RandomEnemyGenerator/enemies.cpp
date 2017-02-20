#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <string>

enum EnemyType {zombie,ghost,vampire,witch};

struct Enemy {

	int Enemytype;
	std::string name;
	int health;	
};

