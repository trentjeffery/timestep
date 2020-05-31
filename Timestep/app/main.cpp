
#include <SDL.h>
#include <iostream>

static bool quitRequested = false;

void Init()
{
	std::cout << "Init\n";
	SDL_Init(SDL_INIT_VIDEO);
	//SDL_AddEventWatch(, RequestQuit);
}

bool Update()
{
	//std::cout << "Update\n";
	SDL_Event event;
	if (SDL_PollEvent(&event) == 1)
	{
		std::cout << "event received\n";
	}
	return true;
}

void Cleanup()
{
	std::cout << "Cleanup\n";
	SDL_Quit();
}

void RequestQuit()
{
	quitRequested = true;
}

int main(int argc, char* argv[])
{
	// run game loop
	Init();
	
	while (!quitRequested)
	{
		Update();
	}
	
	Cleanup();

	return 0;
}