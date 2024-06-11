#include "Wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name)
    : Player(name, 100) {} // default health for Wizard

void Wizard::normalAttack(GameObject& target) {
    std::cout << name << " casts a spell!" << std::endl;
    target.takeDamage(10);
}

void Wizard::specialAttack(GameObject& target) {
    std::cout << name << " casts a powerful spell!" << std::endl;
    target.takeDamage(25);
}