
#include <SDL.h>
#include <iostream>

void Init()
{
	std::cout << "Init\n";
}

bool Update()
{
	std::cout << "Update\n";
	return true;
}

void Cleanup()
{
	std::cout << "Cleanup\n";
}

int main(int argc, char* argv[])
{
	// run game loop
	Init();
	
	while (Update())
	{

	}
	
	Cleanup();

	return 0;
}