#include "raylib.h"
#include "App.h"

int main() {
	Ball tempball = Ball(400, 250);
	Paddle temppaddle = Paddle(350, 450);

	Ball* ball = &tempball; //converting the object to a pointer object
	Paddle* paddle = &temppaddle; //converting the object to a pointer object


	InitWindow(800, 600, "Pong");
	SetWindowState(FLAG_VSYNC_HINT);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);

		DrawFPS(0, 0);
		ball->draw();
		paddle->draw();

		if (IsCursorOnScreen()) {
			HideCursor();
		}

		EndDrawing();
	}

	CloseWindow();


	return 0;
}