#include "flower.h"

Flower::Flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0];
	color[1] = c[1];
	color[2] = c[2];
}

void Flower::draw(sf::RenderWindow& window) {
	petal1.setRadius(10);
	petal1.setFillColor(sf::Color(color[0], color[1], color[2]));
	petal1.setPosition(xpos + 13, ypos - 7);
	window.draw(petal1);
	
	petal2.setRadius(10);
	petal2.setFillColor(sf::Color(color[0], color[1], color[2]));
	petal2.setPosition(xpos - 13, ypos - 7);
	window.draw(petal2);

	petal3.setRadius(10);
	petal3.setFillColor(sf::Color(color[0], color[1], color[2]));
	petal3.setPosition(xpos, ypos + 15);
	window.draw(petal3);

	center.setRadius(12);
	center.setFillColor(sf::Color(250, 200, 50)); // yellow
	center.setPosition(xpos - 2, ypos);
	window.draw(center);

}
