// For drawing a circle//
#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>

void draw_circle(SDL_Renderer *renderer, int xc, int yc, int R);

int main()
{
	int xc, yc, R;

	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("SDL_Init Error: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Window *win = SDL_CreateWindow("Circle Drawing", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == NULL)
	{
		printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == NULL)
	{
		SDL_DestroyWindow(win);
		printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	printf("Enter the center of the circle:\n");
	printf("Xc =");
	scanf("%d", &xc);
	printf("Yc =");
	scanf("%d", &yc);
	printf("Enter the radius of the circle :");
	scanf("%d", &R);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	draw_circle(renderer, xc, yc, R);

	SDL_RenderPresent(renderer);

	SDL_Event e;
	int quit = 0;
	while (!quit)
	{
		while (SDL_PollEvent(&e))
		{
			if (e.type == SDL_QUIT)
			{
				quit = 1;
			}
		}
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}

void draw_circle(SDL_Renderer *renderer, int xc, int yc, int R)
{
	int x = 0;
	int y = R;
	int p = 1 - R;

	while (x <= y)
	{
		SDL_RenderDrawPoint(renderer, xc + x, yc + y);
		SDL_RenderDrawPoint(renderer, xc - x, yc + y);
		SDL_RenderDrawPoint(renderer, xc + x, yc - y);
		SDL_RenderDrawPoint(renderer, xc - x, yc - y);
		SDL_RenderDrawPoint(renderer, xc + y, yc + x);
		SDL_RenderDrawPoint(renderer, xc - y, yc + x);
		SDL_RenderDrawPoint(renderer, xc + y, yc - x);
		SDL_RenderDrawPoint(renderer, xc - y, yc - x);

		x++;
		if (p < 0)
		{
			p += 2 * x + 1;
		}
		else
		{
			y--;
			p += 2 * (x - y) + 1;
		}
	}
}
