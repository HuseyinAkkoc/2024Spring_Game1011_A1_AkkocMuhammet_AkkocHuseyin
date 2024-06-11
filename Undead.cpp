#include "Undead.h"
#include <iostream>

Undead::Undead()
    : Enemy("Undead", 100) {} // default health for Undead

void Undead::taunt() {
    std::cout << name << " moans eerily!" << std::endl;
}

void Undead::normalAttack(GameObject& target) {
    std::cout << name << " bites with rotten teeth!" << std::endl;
    target.takeDamage(12);
}