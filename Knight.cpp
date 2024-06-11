#include "Knight.h"
#include <iostream>
using namespace std;
Knight::Knight(const string& name)
    : Player(name, 150) {} // default health for Knight

void Knight::normalAttack(GameObject& target) {
   cout << name << " swings a sword!" << endl;
    target.takeDamage(15);
}

void Knight::specialAttack(GameObject& target) {
    cout << name << " find a speacial attack here" << endl;   ///!! find a speacial attack here!!!!
    target.takeDamage(30);
}