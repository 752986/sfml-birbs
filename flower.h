#pragma once
#include <SFML/Graphics.hpp>

//class definition for birb
class Flower {
private:
	int xpos;
	int ypos;
	int color[3];

	sf::CircleShape center;
	sf::CircleShape petal1;
	sf::CircleShape petal2;
	sf::CircleShape petal3;

public: 
	Flower(int x, int y, int c[3]);
	void draw(sf::RenderWindow& window);
};
