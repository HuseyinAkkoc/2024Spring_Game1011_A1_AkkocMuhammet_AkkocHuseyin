
 #ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
// Check ifndef and define for all h files!!
//Fixed
#include <string>

class GameObject {
protected:
    std::string name;
    int health;
public:
    GameObject(const std::string& name, int health);
    virtual ~GameObject() = default;

    const std::string& getName() const;
    int getHealth() const;
    void takeDamage(int damage);
};

#endif
