#include <iostream>
#include <SDL2/SDL.h>

SDL_Window* window;
SDL_Renderer* renderer;

using namespace std;

int main(int argc, char* args[]) {
    SDL_Window * window = nullptr;

    SDL_Surface * window_surface = nullptr;
    SDL_Surface * image_surface = nullptr;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    window_surface = SDL_GetWindowSurface(window);
    image_surface = SDL_LoadBMP("image.bmp");

    SDL_BlitSurface(image_surface, NULL, window_surface, NULL);

    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);

    SDL_DestroyWindow(window);
    SDL_FreeSurface(image_surface);
    SDL_Quit();
}