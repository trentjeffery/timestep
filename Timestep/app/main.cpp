
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

	SDL_Window* window = SDL_CreateWindow("Timestep app window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_OPENGL);

	if (window == nullptr)
	{
		std::cout << "Failed to create window: %s\n", SDL_GetError();
		return 1;
	}

	while (!SDL_QuitRequested())
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_KEYDOWN:
				std::cout << event.key.keysym.sym;
			}
		}

	}
	
	Cleanup();

	return 0;
}