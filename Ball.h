#pragma once


#ifndef BALL_H
#define BALL_H

#include <vector>
#include "Paddle.h"

class Paddle;

class Ball {
public:
	Ball(int x, int y);
	Paddle* paddle;
	int x;
	int y;
	int const DIAMETER = 10;
	int velx;
	int vely;
	void update();
	void bounce(Paddle* paddle);
	void draw();
	float angle;


private:
	std::vector<int> starts;
	bool wallCollision();
	bool roofCollision();
};

#endif // !BALL_H
