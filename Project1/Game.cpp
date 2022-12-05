#include "Game.h"


//GameManager constructor
Game::Game() {
	GameScreen = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Game Window Created");

	int scaleSize = 10;
	newPlayer = new player(sf::Color::Blue, sf::Vector2f(20, 20), scaleSize);
}

//only runs on the games start
void Game::start() {
	sf::RenderWindow GameScreen(sf::VideoMode(1920, 1080), "Game Window Created");

	//scales the size of the player character
	int scaleSize = 10;
	player newPlayer(sf::Color::Blue, sf::Vector2f(20, 20), scaleSize);
	newPlayer.setOrigin(scaleSize / 2, scaleSize / 2);
}

//constantly updates to the game RenderWindow
void Game::update() {
	while (GameScreen->isOpen()) {
		sf::Event event;
		while (GameScreen->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				GameScreen->close();
		}
		float PI = 3.14159265;

		newPlayer->playerMovement();
		newPlayer->lookAtCursor(GameScreen);
		

		GameScreen->clear();
		GameScreen->draw(*newPlayer);
		GameScreen->display();
	}
}

void Game::run() {
	start();
	update();
}