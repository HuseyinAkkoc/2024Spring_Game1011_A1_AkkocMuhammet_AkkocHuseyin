
//Checked linker issue, Error LNK2019

// Check ifndef and define for all h files!!
//Fixed

#ifndef WIZARD_H
#define WIZARD_H
#include "Player.h"
using namespace std;
class Wizard : public Player {
public:
    Wizard(const string& name);
    void normalAttack(GameObject& target) override;
    void specialAttack(GameObject& target) override;
};

#endif