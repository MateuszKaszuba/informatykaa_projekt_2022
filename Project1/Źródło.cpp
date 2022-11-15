/*Gra Arcnoid*/


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

int main()
{
	int prawda = 1;
	RenderWindow window(VideoMode {800, 600}, "Gra");
	Event event;
	while (prawda=1)
	{
		window.pollEvent(event);
		window.clear();

			window.display ();
	 }

	return 0;
}