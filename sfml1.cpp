#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(500,1000),"SFML Works!");
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		  { 
		    if (event.type == Event::Closed)
		      window.close( );
		  }
	/*	  window.clear(Color(220,20,60,0));
		  sf::sleep(sf::seconds(0.5));*/
		 window.clear(Color(79,45,29,0));
	window.display( );
	}
return 0;
}
