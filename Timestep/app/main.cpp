
#include <SDL.h>
#include <iostream>

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO);

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
				std::cout << SDL_GetKeyName(event.key.keysym.sym) << "\n";
			}
		}

	}
	
	SDL_Quit();

	return 0;
}