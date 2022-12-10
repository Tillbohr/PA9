#include "Game.h"


//GameManager constructor
Game::Game() {
	GameScreen = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Game Window Created");

	int scaleSize = 10;
	newPlayer = new player(sf::Color::Black, sf::Vector2f(860, 540), scaleSize);
	//newBullet = new bullet(sf::Color::White, 3, newPlayer->getPosition());
}

//only runs on the games start
void Game::start() {
	sf::RenderWindow GameScreen(sf::VideoMode(1920, 1200), "Game Window Created");
	GameScreen.setFramerateLimit(60);
	//scales the size of the player character
	int scaleSize = 10;
	//player newPlayer(sf::Color::Blue, sf::Vector2f(20, 20), scaleSize);
	//newPlayer.setOrigin(scaleSize / 2, scaleSize / 2);
	newPlayer->setOrigin(10, 20);
	
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

		
		newPlayer->lookAtCursor(GameScreen);
		/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

		}*/
		newPlayer->shoot();
		
		GameScreen->clear();

		newPlayer->playerMovement(0.06);
		GameScreen->draw(*newPlayer);
		for (size_t i = 0; i < bullets.size(); i++) {
			GameScreen->draw(newPlayer->bullets[i]);
		}

		GameScreen->display();
	}
}

void Game::run() {
	start();
	update();
}

//float deltaTime() {
//
//}