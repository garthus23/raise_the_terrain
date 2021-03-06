#include <SDL2/SDL.h>
#include <stdio.h>

/**
 * main - Simple Window
 * @argc: an int
 * @argv: an array
 * Return: 0 if it works
**/
int main(int argc, char **argv)
{
	SDL_Window *window = NULL;
	SDL_Surface *screenSurface = NULL;
	int SCREEN_HEIGHT = 480;
	int SCREEN_WIDTH = 640;


	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL Error: %s", SDL_GetError());
	}
	else
	{
		window = SDL_CreateWindow("My SDL", SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if (window == NULL)
		{
			printf("Coul not create Windows: %s", SDL_GetError());
		}
		else
		{
			screenSurface = SDL_GetWindowSurface(window);

			SDL_FillRect(screenSurface, NULL,
			SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			SDL_UpdateWindowSurface(window);
			SDL_Delay(2000);
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit;

	return (0);

}
