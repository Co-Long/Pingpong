#include "Ball.h"
#include "graphics.h"
#pragma comment(lib, "graphics.lib")

int main()
{
	initwindow(900, 500, "Pingpong");
	
	Ball ball(100, 100, 10, 80, 5, 5, GREEN);
	while (true) {
		ball.move();
	}

	getch();
	closegraph();
	return 0;
}