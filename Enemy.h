
#ifndef  ENEMY_H
#define ENEMY_H

// Check ifndef and define for all h files!!
//Fixed
#include "GameObject.h"
using namespace std;

// create enemy cpp file
class Enemy : public GameObject {
public:
    Enemy(const string& name, int health);
    virtual void taunt() = 0;
    virtual void normalAttack(GameObject& target) = 0;
};

#endif