#include <SFML/Graphics.hpp>
#include <vector>
#include "birb.h"

int main() {
	srand(time(0));

	std::vector<birb> bibbs;

	for (int i = 0; i < 1000; i++) {
		int birbColor[] = { rand() % 255, rand() % 255, rand() % 255 }; //set up an array of colors to make your birbs WHATEVER COLOR!

		bibbs.push_back(birb(rand() % 800, rand() % 800, birbColor)); //instantiate a birb in a random spot
	}

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window

	while (true) { // GAME LOOP OMG
		for (int i = 0; i < bibbs.size(); i++){
			bibbs[i].draw(window);
			if (rand() % 100 <= 3) {
				bibbs[i].fly();
			}
		}
		
		window.display();
	}
}


