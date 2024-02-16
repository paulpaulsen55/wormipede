#include "Projectile.h"

Projectile::Projectile(float startX, float startY) {
    position.x = startX;
    position.y = startY;

    projectileShape.setSize(Vector2f(10, 10));
    projectileShape.setPosition(position);
}

FloatRect Projectile::getPosition() {
    return projectileShape.getGlobalBounds();
}

RectangleShape Projectile::getShape() {
    return projectileShape;
}

void Projectile::update() {
    position.y -= projectileSpeed;
    projectileShape.setPosition(position);
}
