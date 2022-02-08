#include "raylib.h"
#include "Paddle.h"

Paddle::Paddle(int x, int y) {
	//x = 350;
	//y = 450;
	this->x = x;
	this->y = y;
}

void Paddle::move_left() {
	x -= 2;
}

void Paddle::move_right() {
	x += 2;
}

int Paddle::get_x() {
	return x;
}

int Paddle::get_y() {
	return y;
}

void Paddle::draw() {
	DrawRectangle(this->x, this->y, WIDTH, HEIGHT, WHITE);
}