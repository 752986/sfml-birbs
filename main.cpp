#include <SFML/Graphics.hpp>
#include <vector>
#include "birb.h"
#include "flower.h"

int main() {
	srand(time(0));

	std::vector<Birb> bibbs;
	std::vector<Flower> floors;

	for (int i = 0; i < 40; i++) {
		int birbColor[] = { rand() % 255, rand() % 255, rand() % 255 }; //set up an array of colors to make your birbs WHATEVER COLOR!

		bibbs.push_back(Birb(rand() % 800, rand() % 800, birbColor)); //instantiate a birb in a random spot
	}
	for (int i = 0; i < 40; i++) {
		int flowerColor[] = { rand() % 255, rand() % 255, rand() % 255 }; //set up an array of colors to make your birbs WHATEVER COLOR!

		floors.push_back(Flower(rand() % 800, 400 + rand() % 400, flowerColor)); //instantiate a birb in a random spot
	}

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window

	bool running = true;
	while (running) { // GAME LOOP OMG
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				running = false;
			}
		}

		window.clear(sf::Color(100, 200, 250));

		for (int i = 0; i < bibbs.size(); i++){
			bibbs[i].draw(window);
			if (rand() % 100 <= 3) {
				bibbs[i].fly();
			}
		}
		for (int i = 0; i < floors.size(); i++){
			floors[i].draw(window);
		}
		
		window.display();
	}
}


