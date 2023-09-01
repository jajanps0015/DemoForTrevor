// SDLProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SDLMain.h>

#define HUNDRED 100

int main()
{
    std::cout << HUNDRED;

	auto *window = SDL_CreateWindow(
		"WINDOW_TITLE",				// window title
		SDL_WINDOWPOS_UNDEFINED,	// window x pos
		SDL_WINDOWPOS_UNDEFINED,	// window y pos
		600,				// window width
		800,				// window height
		SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);			// window flags
	if (window == nullptr) 
	{
		return false;
	}

	//useless comment
}