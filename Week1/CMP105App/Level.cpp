#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect1.setSize(sf::Vector2f(50, 5));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(550, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(50, 50));
	rect2.setPosition(100, 250);
	rect2.setFillColor(sf::Color::Red);

	rect3.setSize(sf::Vector2f(30, 30));
	rect3.setPosition(110, 260);
	rect3.setFillColor(sf::Color::Green);

	rect4.setSize(sf::Vector2f(10, 10));
	rect4.setPosition(120, 270);
	rect4.setFillColor(sf::Color::Blue);

	rect5.setSize(sf::Vector2f(30, 30));
	rect5.setPosition(1160, 635);
	rect5.setFillColor(sf::Color::Green);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setPosition(300,500);
	text.setFillColor(sf::Color::Black);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();

	rect5.setPosition(pos.x - 40, pos.y - 40);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect1);
	window->draw(circle);

	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);

	window->draw(rect5);

	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}