#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Player.h"
#include "ProjectileController.h"

using namespace sf;

int main() {
    Game game(800, 600);
    game.run();

    /*Player player(100.f, 100.f);
    ProjectileController projectileController;

    Clock deltaClock;
    float dt;

    while (window.isOpen()) {
        for (auto event = Event{}; window.pollEvent(event);) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
            player.moveLeft();
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
            player.moveRight();
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
            player.moveUp();
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
            player.moveDown();
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
            if (deltaClock.getElapsedTime().asSeconds() > 0.5f) {
                projectileController.shootProjectile(player.getPosition().left, player.getPosition().top);
                deltaClock.restart();
            }
        }

        // player wall collision
        RectangleShape playerShape = player.getShape();
        if (player.getPosition().left < 0) {
            player.setX(0);
        }
        if (player.getPosition().left > static_cast<float>(windowWidth) - playerShape.getSize().x) {
            player.setX(static_cast<float>(windowWidth) - playerShape.getSize().x);
        }
        if (player.getPosition().top < 0) {
            player.setY(0);
        }
        if (player.getPosition().top > static_cast<float>(windowHeight) - playerShape.getSize().y) {
            player.setY(static_cast<float>(windowHeight) - playerShape.getSize().y);
        }

        // updating
        player.update();
        projectileController.updateProjectiles();

        // drawing
        window.clear();
        window.draw(player.getShape());
        for (auto projectile : projectileController.getProjectiles()) {
            window.draw(projectile.getShape());
        }

        window.display();
    }*/
}
