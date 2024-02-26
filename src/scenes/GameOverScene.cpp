#include "GameOverScene.h"
#include <memory>
#include "MenuScene.h"
#include "SceneManager.h"
#include "../Constants.h"
#include "SFML/Window/Mouse.hpp"

GameOverScene::GameOverScene(const int x, const int y, TextureManager *textureManager) : Scene(textureManager), x(x),
    y(y) {
    font.loadFromFile(FONT);

    gameOverText.setFont(font);
    gameOverText.setString("Game Over");
    gameOverText.setCharacterSize(100);
    gameOverText.setPosition(200, 50);

    restartButton.setSize(Vector2f(200, 100));
    restartButton.setFillColor(Color::Green);
    restartButton.setPosition(300, 300);

    restartText.setFont(font);
    restartText.setString("Restart");
    restartText.setCharacterSize(50);
    restartText.setFillColor(Color::White);
    restartText.setPosition(350, 320);
}

void GameOverScene::handleInput(const Event event, RenderWindow &window, SceneManager &sceneManager) {
    if (event.type == Event::MouseButtonReleased) {
        if (event.mouseButton.button == Mouse::Left) {
            if (const Vector2i mousePosition = Mouse::getPosition(window); restartButton.getGlobalBounds().contains(
                mousePosition.x, mousePosition.y)) {
                sceneManager.popScene();
                sceneManager.pushScene(std::make_unique<MenuScene>(800, 800, textureManager));
            }
        }
    }
}

void GameOverScene::update(float dt) {
    Scene::update(dt);
}

void GameOverScene::draw(RenderTarget &target, RenderStates states) const {
    target.draw(gameOverText);

    target.draw(restartButton);
    target.draw(restartText);
}
