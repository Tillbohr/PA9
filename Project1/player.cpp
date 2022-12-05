#include "player.h"


void player::playerMovement() {
	//moves the player up when pressing W
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		move(0, -0.05);
	}

	//moves the player left when pressing A
	if (Keyboard::isKeyPressed(Keyboard::A)) {
		move(-0.05, 0);
	}

	//moves the player down when pressing S
	if (Keyboard::isKeyPressed(Keyboard::S)) {
		move(0, 0.05);
	}

	//moves the player right when pressing D
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		move(0.05, 0);
	}
}

void player::lookAtCursor(sf::RenderWindow* targetWindow) {
	float dx = Mouse::getPosition(*targetWindow).x - getPosition().x;
	float dy = Mouse::getPosition(*targetWindow).y - getPosition().y;
	float rotation = ((atan2(dy, dx)) * (180 / PI)) + 90;
	setRotation(rotation);
}