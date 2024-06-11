#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Wizard.h"
#include "Knight.h"
#include "Orc.h"
#include "Undead.h"
using namespace std;
// check std parts.
void battleSequence(Player& player, Enemy& enemy) {
    enemy.taunt();
    player.normalAttack(enemy);

    enemy.taunt();
    player.specialAttack(enemy);

    enemy.normalAttack(player);
    enemy.normalAttack(player);

    player.specialAttack(enemy);

    enemy.taunt();
    player.specialAttack(enemy);

    cout << enemy.getName() << " dies." << endl;
    cout << "Congratulations, " << player.getName() << "! You have won the battle!" << endl;// Fixed the grammar error.//FIXED!
}

int main() {
        srand(time(nullptr));
    cout << "Welcome to the RPG battle simulation!" << endl;

    string playerName;
    char playerType;
    cout << "Choose your character type , (W: Wizard, K: Knight): ";//  !Assignment document says human or wizard. However,  on hierarcy picture looks like Knight Wizard. 
    cin >> playerType;                                                                               // Player
    cout << "Enter your character name: ";
    cin >> playerName;

    Player* player = nullptr;
    if (playerType == 'W' || playerType == 'w') {
        player = new Wizard(playerName);
    }
    else if (playerType == 'K' || playerType == 'k') {
        player = new Knight(playerName);
    }
    else {
        cerr << "Invalid player type!" << endl;
        return 1;
    }

    cout << "Player summary:" << endl;
    cout << "Name: " << player->getName() << endl;
    cout << "Health: " << player->getHealth() << endl;

    cout << "Are you ready to witness a battle? (y/n): ";
    char ready;
    cin >> ready;

    if (ready == 'y' || ready == 'Y') {
        Enemy* enemy = nullptr;
        int enemyType = std::rand() % 2;
        if (enemyType == 0) {
            enemy = new Orc();
        }
        else {
            //Undead.h has an issue, check the error code// Muhammet FIXED!
            enemy = new Undead();
        }

        cout << "You encounter a " << enemy->getName() << "!" << endl;
        cout << "Enemy Health: " << enemy->getHealth() << endl;

        battleSequence(*player, *enemy);

        delete enemy;
    }
    else {
        cout << "Maybe next time!" << std::endl;
    }

    delete player;
    return 0;
}