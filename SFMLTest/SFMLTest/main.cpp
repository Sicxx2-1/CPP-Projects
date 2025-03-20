#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace sf;

class RPGGame {
private:
    RenderWindow window;
    sf::Font font;
    sf::Text displayText;
    vector<string> inventory;
    string playerName;
    int health;
    int gameState; // 0 = Start, 1 = Adventure, 2 = Game Over

public:
    RPGGame() : window(sf::VideoMode(800, 600), "RPG Adventure"), health(100), gameState(0) {
        if (!font.loadFromFile("arial.ttf")) {
            cerr << "Error loading font!" << endl;
            exit(1);
        }
        displayText = sf::Text("Press ENTER to start your adventure.", font, 24);
        displayText.setFillColor(sf::Color::White);
        displayText.setPosition(sf::Vector2f(50.f, 50.f));
    }

    void run() {
        while (window.isOpen()) {
            processEvents();
            update();
            render();
        }
    }

    void processEvents() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
                handleInput(event.key.code);
        }
    }

    void handleInput(sf::Keyboard::Key key) {
        if (gameState == 0) { // Start screen
            if (key == sf::Keyboard::Enter) {
                gameState = 1;
                inventory.push_back("Sword");
                displayText.setString("Adventure Begins! You have a sword.\nPress 1 to travel North.\nPress 2 to fight a monster.");
            }
        }
        else if (gameState == 1) { // Adventure
            if (key == sf::Keyboard::Num1) {
                displayText.setString("You travel North and find a mysterious house.\nPress 3 to explore, 4 to move on.");
            }
            else if (key == sf::Keyboard::Num2) {
                displayText.setString("You encounter an Ancient Golem and die!\nPress ENTER to restart.");
                gameState = 2;
            }
            else if (key == sf::Keyboard::Num3) {
                displayText.setString("You found a chest plate!\nPress 1 to continue your journey.");
                inventory.push_back("Chest Plate");
            }
            else if (key == sf::Keyboard::Num4) {
                displayText.setString("You continue through the forest.\nPress 1 to proceed North.");
            }
        }
        else if (gameState == 2) { // Game Over
            if (key == sf::Keyboard::Enter) {
                gameState = 0;
                inventory.clear();
                health = 100;
                displayText.setString("Press ENTER to start your adventure.");
            }
        }
    }

    void update() {
        // Future logic updates can be added here.
    }

    void render() {
        window.clear(sf::Color::Black);
        window.draw(displayText);
        window.display();
    }
};

int main() {
    RPGGame game;
    game.run();
    return 0;
}
