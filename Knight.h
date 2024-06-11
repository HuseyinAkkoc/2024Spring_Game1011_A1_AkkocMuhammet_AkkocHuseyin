
#ifndef KNIGHT_H
#define KNIGHT_H


#include "Player.h"

class Knight : public Player {
public:
    Knight(const std::string& name);
    void normalAttack(GameObject& target) override;
    void specialAttack(GameObject& target) override;
};

#endif