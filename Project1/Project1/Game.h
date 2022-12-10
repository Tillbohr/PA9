#pragma once
#include "player.h"

class Game {
public:
	//GameManager constructor
	Game();

	//constantly updates to the game RenderWindow
	void update();

	//only runs on the games start
	void start();

	//runs the program
	void run();
private:
	player* newPlayer;
	std::vector<bullet> bullets;
	sf::RenderWindow* GameScreen;
};

//float deltaTime();