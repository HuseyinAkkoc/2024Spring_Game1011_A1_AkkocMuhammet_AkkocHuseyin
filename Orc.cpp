#include "Orc.h"
#include <iostream>
using namespace std;
Orc::Orc()
    : Enemy("Orc", 120) {} // default health for Orc

void Orc::taunt() {
   cout << name << " growls dangerously "<<endl;
}

void Orc::normalAttack(GameObject& target) {
    cout << name << " slashes with a crude weapon!" << endl;
    target.takeDamage(10);
}