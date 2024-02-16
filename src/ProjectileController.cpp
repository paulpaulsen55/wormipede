#include "ProjectileController.h"


ProjectileController::ProjectileController() {
}

void ProjectileController::shootProjectile(float startX, float startY) {
    const Projectile newProjectile(startX, startY);
    projectiles.push_back(newProjectile);
}

std::list<Projectile> ProjectileController::getProjectiles() {
    return projectiles;
}

void ProjectileController::updateProjectiles() {
    auto it = projectiles.begin();
    while (it != projectiles.end()) {
        if (it->getPosition().top < 0) {
            it = projectiles.erase(it);
        } else {
            it->update();
            ++it;
        }
    }
}
