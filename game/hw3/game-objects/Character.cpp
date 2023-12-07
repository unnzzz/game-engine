#include "Character.h"
#include "GameObject.h"
#include "components/CharMoveComponent.h"
#include "components/CollisionComponent.h"
#include "components/RenderComponent.h"

Character::Character(std::string id, sf::Shape *shape, float speed, sf::RenderWindow *window, GameObject *spawnPoint) : GameObject(id, TYPE_CHARACTER, shape, new CharMoveComponent(speed), new CollisionComponent(false), new RenderComponent(window)) {
    // this->setSpawnPoint(new GameObject(new sf::RectangleShape(sf::Vector2f(0,0))));
    // this->spawnPoint->getShape()->setPosition(spawnPoint);
    this->setSpawnPoint(spawnPoint);
    this->respawn();
}

void Character::respawn() {
    this->getShape()->setPosition(this->spawnPoint->getShape()->getPosition());
}

void Character::setSpawnPoint(GameObject *spawnPoint) {
    this->spawnPoint = spawnPoint;
}
