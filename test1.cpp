#include <SDL2/SDL.h>
SDL_Window *Win1 =0;
SDL_Renderer *Ren1 =0;

int main (int argc, char *args[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
// Making Window
Win1 = SDL_CreateWindow("Welcome to Game  Tutorial",
                        SDL_WINDOWPOS_CENTERED,
                        SDL_WINDOWPOS_CENTERED,
                        640,480,
                        SDL_WINDOW_SHOWN);
//creating render
Ren1 = SDL_CreateRenderer(Win1,-1,0);

SDL_SetRenderDrawColor(Ren1,225,225,225,0);
SDL_RenderClear(Ren1);
// starting Rectangles
SDL_Rect r1,r2,r3,r4;
r1.x = 100; r1.y =250; r1.h = 50; r1.w = 100;
r2.x = 200; r2.y =200; r2.h = 100; r2.w = 100;
r3.x = 300; r3.y =150; r3.h = 150; r3.w = 100;
r4.x = 400; r4.y =100; r4.h = 200; r4.w = 100;
//rendering Rectangles
SDL_SetRenderDrawColor(Ren1,225,0,0,0);
SDL_RenderFillRect(Ren1,&r1);
SDL_SetRenderDrawColor(Ren1,0,255,0,0);
SDL_RenderFillRect(Ren1,&r2);
SDL_SetRenderDrawColor(Ren1,0,0,255,0);
SDL_RenderFillRect(Ren1,&r3);
SDL_SetRenderDrawColor(Ren1,0,0,0,255);
SDL_RenderFillRect(Ren1,&r4);
//lines
SDL_RenderDrawLine(Ren1,50,200,500,200);
SDL_SetRenderDrawColor(Ren1,0,100,100,0);

SDL_RenderDrawLine(Ren1,50,0,50,200);
SDL_SetRenderDrawColor(Ren1,100,0,100,0);
// using scale and points
SDL_RenderSetScale(Ren1,5,5);
SDL_SetRenderDrawColor(Ren1,0,100,100,0);

SDL_RenderDrawPoint(Ren1,5,10);
SDL_SetRenderDrawColor(Ren1,100,0,100,0);

//showing window
SDL_RenderPresent(Ren1);
SDL_Delay(10000);
//quiting
SDL_Quit();
return 0;
}