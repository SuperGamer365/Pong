#pragma once

#ifndef PADDLE_H
#define PADDLE_H

class Paddle {
public:
	Paddle(int x, int y);
	int x;
	int y;
	int const HEIGHT = 25;
	int const WIDTH = 150;
	void draw();


private:
	void move_right();
	void move_left();
	int get_x();
	int get_y();
};

#endif // !PADDLE_H
