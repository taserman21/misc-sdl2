#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
    SDL_Window* window = NULL;
    
    SDL_Init(SDL_INIT_VIDEO);
    
    window = SDL_CreateWindow("BLAH WINDOW", 0, 0, 1920, 975, SDL_WINDOW_SHOWN || SDL_WINDOW_RESIZABLE);
    
    SDL_Delay(4000);
    
    SDL_DestroyWindow(window);
    
    return 1;
    
}