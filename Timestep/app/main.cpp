
#include <SDL.h>
#include <iostream>

void Init()
{
	std::cout << "Init\n";
	SDL_Init(SDL_INIT_VIDEO);
}

bool Update()
{
	std::cout << "Update\n";
	return true;
}

void Cleanup()
{
	std::cout << "Cleanup\n";
	SDL_Quit();
}

int main(int argc, char* argv[])
{
	// run game loop
	Init();
	
	while (Update())
	{
		break;
	}
	
	Cleanup();

	return 0;
}