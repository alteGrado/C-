a#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(500,1000),"SFML Works!");
	while(window.isOpen( ))
	{
		Event event;
		while (window.pollEvent(event))
		{
			if(event.type == Event::Closed)
			window.close( );
		}
	window.clear( Color(250,220,100,0));
	CircleShape circle(50.f,70);
	circle.move( 35,35);
	circle.setFillColor(Color(230,0,200));
	circle.setOutlineThickness(15.f);
	circle.setOutlineColor(Color(80,220,50,50));
	window.draw(circle);
	window.display( );
	}
return 0;
}