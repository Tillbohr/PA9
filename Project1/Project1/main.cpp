#include "Game.h"

using sf::Keyboard;
using sf::Mouse;

int main() {
	
	//Please use game functions start and update to make changes either at the beginning of the program or continuously during the program
	//These functions can be found in the game class member functions
	
	Game myGame;
	myGame.run();
	
	return 0;
}


// CODE IF COMPARTMENTALIZED GAME CODE BREAKS

//sf::RenderWindow GameScreen(sf::VideoMode(1920, 1080), "Game Window Created");
	////player player(sf::Color::Red, 30, sf::Vector2f((GameScreen.getSize().x / 2) - 10, (GameScreen.getSize().y / 2) - 10));
	////sf::CircleShape triangle(80, 3);

	//int scaleSize = 10;
	//player newPlayer(sf::Color::Blue, sf::Vector2f(20, 20), scaleSize);
	//newPlayer.setOrigin(scaleSize / 2, scaleSize / 2);
	//float PI = 3.14159265;
	////Mouse::setPosition(sf::Vector2i(960, 540));
	//
	////player.setRotation(90);
	////player.setOrigin(player.getRadius(), player.getRadius());
	//while (GameScreen.isOpen()) {
	//	sf::Event event;
	//	while (GameScreen.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//			GameScreen.close();
	//	}
	//	
	//	//player.playerMovement();
	//	newPlayer.playerMovement();
	//	/*sf::Vector2f curPos;
	//	curPos.x = player.getGlobalBounds().left;
	//	curPos.y = player.getGlobalBounds().top;
	//	sf::Vector2i position = sf::Mouse::getPosition(GameScreen);
	//	position = sf::Vector2i(GameScreen.mapPixelToCoords(position));*/
	//	
	//	float dx = Mouse::getPosition(GameScreen).x - newPlayer.getPosition().x;
	//	float dy = Mouse::getPosition(GameScreen).y - newPlayer.getPosition().y;
	//	float rotation = ((atan2(dy, dx)) * (180 / PI)) + 90;
	//	newPlayer.setRotation(rotation);
	//	
	//	GameScreen.clear();
	//	//GameScreen.draw(player);
	//	GameScreen.draw(newPlayer);
	//	GameScreen.display();
	//}
	////std::cout << player.getOrigin().x << player.getOrigin().y << std::endl;