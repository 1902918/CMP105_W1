#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(550, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);

	rectRed.setSize(sf::Vector2f(50, 50));
	rectRed.setPosition(100, 250);
	rectRed.setFillColor(sf::Color::Red);

	rectGreen.setSize(sf::Vector2f(30, 30));
	rectGreen.setPosition(110, 260);
	rectGreen.setFillColor(sf::Color::Green);

	rectBlue.setSize(sf::Vector2f(10, 10));
	rectBlue.setPosition(120, 270);
	rectBlue.setFillColor(sf::Color::Blue);

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
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(circle);

	window->draw(rectRed);
	window->draw(rectGreen);
	window->draw(rectBlue);

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