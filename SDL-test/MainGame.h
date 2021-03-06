#pragma once
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include "Sprite.h"
#include "GLSLProgram.h"
#include "GLTexture.h"

enum class GameState { PLAY, EXIT };

class MainGame {
public:
	MainGame();
	~MainGame();

	void run();
private:
	void initSystems();
	void initShaders();
	void gameLoop();
	void processInput();
	void drawGame();

	SDL_Window* _window;
	int _screenWidth;
	int _screenHeight;
	GameState _gameState;

	Sprite _sprite;
	GLSLProgram _colourProgram;

	float _time;
};

