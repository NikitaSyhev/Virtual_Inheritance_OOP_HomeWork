#pragma once
#include <iostream>



class Character {
public:
	Character() {
		std::cout << " Constructor Character was created. " << std::endl;
	}
	int getHP() {
		return _HP;
	}
	int _HP = 50;
};

class Orch : public virtual Character {
public:
	Orch() {
		std::cout << "Constructor Orch was created. " << std::endl;
	}
};


class Warrior : public virtual Character {
public:
	Warrior() {
		std::cout << "Construtor Warrior was created. " << std::endl;
	}
};


class OrchWarrior : public Orch, public Warrior {
public:
	OrchWarrior() {
		std::cout << "Constructor OrchWarrior was created. " << std::endl;
	}
};