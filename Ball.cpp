#include "Ball.h"

Ball::Ball() {

}

Ball::Ball(int x, int y, int r, int speed, int dx, int dy, int color) {
	this->x = x;
	this->y = y;
	this->r = r;
	this->speed = speed;
	this->dx = dx;
	this->dy = dy;
	this->color = color;
}

void Ball::draw() {
	setcolor(color);
	setfillstyle(1, color);
	//pieslice(x, y, 0, 360, r);
	circle(x, y, r);
	floodfill(x, y, color);
}

void Ball::erase() {
	setcolor(BLACK);
	setfillstyle(1, BLACK);
	//pieslice(x, y, 0, 360, r);
	circle(x, y, r);
	floodfill(x, y, BLACK);
}

void Ball::move() {
		if (x + r >= 900 || x - r <= 0) dx = -dx;
		if (y + r >= 500 || y - r <= 0) dy = -dy;
		x += dx;
		y += dy;
		draw();
		delay(100 - speed);
		erase();
}