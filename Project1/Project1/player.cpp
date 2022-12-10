#include "player.h"


void player::playerMovement(float speed) {
	float realSpeed = speed;
	float maxSpeed = 0.5;
	bool slowDown = true;
	xDir = 0;
	yDir = 0;
	//UP
	//moves the player up when pressing W
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		yDir = -1;
		//move(0, yDir * speed);
	}

	//DOWN
	//moves the player down when pressing S
	if (Keyboard::isKeyPressed(Keyboard::S)) {
		yDir = 1;
		//move(0, yDir * speed);
	}

	//LEFT
	//moves the player left when pressing A
	if (Keyboard::isKeyPressed(Keyboard::A)) {
		xDir = -1;
		//move(xDir * speed, 0);
	}

	//RIGHT
	//moves the player right when pressing D
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		xDir = 1;
		//move(xDir * speed, 0);
	}

	//sf::Time slowDownTime = sf::seconds(3);
	sf::Clock clock;
	sf::Time timeElapsed = clock.getElapsedTime();
	if (timeElapsed.asSeconds() == 3) {
		std::cout << "hello" << std::endl;
	}

	/*while () {

	}*/


	/*if (realSpeed >= maxSpeed) {
		realSpeed = 0.f;
		slowDown = true;
	}
	else {
		slowDown = false;
	}*/

	/*if (realSpeed < maxSpeed) {
		realSpeed += 0.1f;
	}*/

	/*std::cout << realSpeed << std::endl;
	if (slowDown == true) {
		move(xDir * realSpeed, yDir * realSpeed);
	}*/
	move(xDir * realSpeed, yDir * realSpeed);
}

void player::lookAtCursor(sf::RenderWindow* targetWindow) {
	float dx = Mouse::getPosition(*targetWindow).x - getPosition().x;
	float dy = Mouse::getPosition(*targetWindow).y - getPosition().y;
	float rotation = ((atan2(dy, dx)) * (180 / PI)) + 90;
	setRotation(rotation);
}

void player::shoot() {
	if (shootCoolDown < 3) {
		shootCoolDown++;
		std::cout << "working" << std::endl;
	}

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left) /* && shootCoolDown >= shootCoolDown*/) {
		bullet newBullet(sf::Color::White, 3, getPosition());
		bullets.push_back(newBullet);
		shootCoolDown = 0;
		
	}
	for (size_t i = 0; i < bullets.size(); i++) {
		bullets[i].move(0, -10);
		if (bullets[i].getPosition().y < 0) {

		}
	}
}