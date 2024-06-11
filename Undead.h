#ifndef UNDEAD_H
#define UNDEAD_H
// Check ifndef and define for all h files!!
//Fixed
#include "Enemy.h"

class Undead : public Enemy {
public:
    Undead();
    void taunt() override;
    void normalAttack(GameObject& target) override;
};

#endif // UNDEAD_H