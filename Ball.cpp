#include "raylib.h"
#include "Ball.h"
#include "Paddle.h"



Ball::Ball(int x, int y) {
	this->x = x;
	this->y = y;
	starts = {-3, -2, -1, 1, 2, 3 };
	velx = starts[rand() % 6];
	vely = 1;
}

void Ball::update() {
	if (roofCollision()) {
		vely *= -1;
	}

	if (wallCollision()) {
		velx *= -1;
	}

	x += velx;
	y += vely;
}

bool Ball::roofCollision() {
	if (y <= 0) {
		return true;
	}
	return false;
}

bool Ball::wallCollision() {
	if (x <= 0 || x >= 600) {
		return true;
	}
	return false;
}

void Ball::bounce(Paddle *paddle) {
	if (this->y <= paddle->y) {
		if (this->x >= paddle->x || this->x + paddle->WIDTH <= paddle->x + paddle->WIDTH) {
			velx *= -1;
			vely *= -1;
		}
	}
}

void Ball::draw() {
	DrawCircle(this->x, this->y, (float)DIAMETER / 2, RED);
}