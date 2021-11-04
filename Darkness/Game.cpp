#include "SFML\Graphics.hpp"
using namespace sf;
int main()
{
	sf::ContextSettings anti_aliasing ;
	anti_aliasing.antialiasingLevel = 8;
	sf::RenderWindow render(sf::VideoMode(400, 400), "Darkness", sf::Style::Default , anti_aliasing);
	sf::CircleShape test(100, 30U);
	test.setFillColor(sf::Color(125, 125, 125));
	render.draw(test);
	render.display();
}