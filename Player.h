#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player : public GameObject {
public:
    Player(const std::string& name, int health);
    virtual void normalAttack(GameObject& target) = 0;
    virtual void specialAttack(GameObject& target) = 0;
};

#endif