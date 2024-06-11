

#ifndef ORC_H
#define ORC_H

#include "Enemy.h"

class Orc : public Enemy {
public:
    Orc();
    void taunt() override;
    void normalAttack(GameObject& target) override;
};

#endif