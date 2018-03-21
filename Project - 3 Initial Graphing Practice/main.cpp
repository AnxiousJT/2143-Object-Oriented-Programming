//**************************************************************
//                    Project # 3 Initial Graphing Practice
//                      Name: Jackson Tran
//                Object-Oriented Programing 3/21/2018
//***************************************************************
//      Using SFML, we will use methods to create 5 different shapes.
//		A triangle, ssquare, pentagon, hexagon, and rectangle. The 
//		triangle and hexagon will have outlines colored differently 
//		than their center color. The shapes will not overlap and fit
//		in a window of size (600,400).
//		
//*****************************************************************


#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 400), "5 Shapes Window");

	sf::CircleShape triangle(50, 3);
	triangle.setFillColor(sf::Color::Blue);
	sf::CircleShape square(50, 4);
	square.setFillColor(sf::Color::Red);
	square.rotate(45);
	sf::CircleShape pentagon(50, 5);
	pentagon.setFillColor(sf::Color::Green);
	sf::CircleShape hexagon(50, 6);
	hexagon.setFillColor(sf::Color::Yellow);
	sf::RectangleShape rectangle(sf::Vector2f(120, 60));
	rectangle.setFillColor(sf::Color::White);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		triangle.setPosition(10, 10);
		triangle.setOutlineThickness(5);
		triangle.setOutlineColor(sf::Color(250, 150, 100));

		square.setPosition(255, 0);

		pentagon.setPosition(410, 10);

		hexagon.setPosition(105, 200);
		hexagon.setOutlineThickness(5);
		hexagon.setOutlineColor(sf::Color::Magenta);

		rectangle.setPosition(310, 225);

		window.clear();
		window.draw(triangle);
		window.draw(square);
		window.draw(pentagon);
		window.draw(hexagon);
		window.draw(rectangle);
		window.display();
	}

	return 0;
}
