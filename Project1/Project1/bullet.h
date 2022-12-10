#include "SFML/Graphics.hpp"

class bullet : public sf::ConvexShape {
public:
	bullet(const sf::Color& color, int scaleSize, const sf::Vector2f& startPosition) : sf::ConvexShape(4) {

		setFillColor(color);
		setPosition(startPosition);
		setPoint(0, sf::Vector2f(0, 0));
		setPoint(1, sf::Vector2f(scaleSize, 0));
		setPoint(2, sf::Vector2f(scaleSize, scaleSize * 2));
		setPoint(3, sf::Vector2f(0, scaleSize * 2));
	}
	//void draw(sf::RenderWindow* targetWindow);
private:
};