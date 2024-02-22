#ifndef PROJECTILECONTROLLER_H
#define PROJECTILECONTROLLER_H
#include <list>
#include "Projectile.h"


/**
 * This class is responsible for managing the projectiles in the game.
 * It provides methods for creating new projectiles and removes them when they are out of view.
 */
class ProjectileController final : public Drawable {
public:
    ProjectileController();

    void shootProjectile(float startX, float startY);

    std::list<Projectile> getProjectiles();

    void updateProjectiles();

private:
    void draw(RenderTarget &target, RenderStates states) const override;

    std::list<Projectile> projectiles;
};


#endif //PROJECTILECONTROLLER_H
