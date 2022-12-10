#pragma once
#include "bullet.h"
#include <time.h>
#include <iostream>
#include <vector>

using sf::Mouse;
using sf::Keyboard;

class player : public sf::ConvexShape {
public:
	player(const sf::Color& playerColor, const sf::Vector2f& newPos, int size) : sf::ConvexShape(3) {
		//sets the player color
		setFillColor(playerColor);
		setOutlineColor(sf::Color::White);
		setOutlineThickness(1);

		//sets the starting position of the player
		setPosition(newPos);

		//sets all three points of the player triangle, modifiable by a scalable size integer.
		setPoint(0, sf::Vector2f(1 * size, 0));
		setPoint(1, sf::Vector2f(2 * size, 3 * size));
		setPoint(2, sf::Vector2f(0, 3 * size));
		xDir = 0;
		yDir = 0;
	}

	//player movement function
	void playerMovement(float speed);
	void lookAtCursor(sf::RenderWindow* targetWindow);
	void shoot();
	std::vector<bullet> bullets;
private:
	float PI = 3.14159265;
	int xDir;
	int yDir;
	int shootCoolDown = 0;
	//std::vector<bullet>* bullets;
};
