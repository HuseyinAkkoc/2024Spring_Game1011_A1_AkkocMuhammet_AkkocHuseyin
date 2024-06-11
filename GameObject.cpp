#include "GameObject.h"
using namespace std;
GameObject::GameObject(const string& name, int health)
    : name(name), health(health) {}

const string& GameObject::getName() const {
    return name;
}

int GameObject::getHealth() const {
    return health;
}

void GameObject::takeDamage(int damage) {
    health -= damage;
}