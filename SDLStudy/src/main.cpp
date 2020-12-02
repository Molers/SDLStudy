#include "../SDL2/include/SDL.h"
//#define   LIBPATH(path,file)   path##file 

//#pragma comment (lib,LIBPATH(__FILE__,"..\\SDL2\\lib\\x64\\SDL2.lib")) 
//#pragma comment (lib,LIBPATH(__FILE__,"..\\SDL2\\lib\\x64\\SDL2main.lib")) 
//#pragma comment(lib, __FILE__"../SDL2/lib/x64/SDL2.lib") 
//#pragma comment(lib, __FILE__"../SDL2/lib/x64/SDL2main.lib") 
//#pragma comment(lib, "SDL2/lib/x64/SDL2.lib") 
//#pragma comment(lib, "SDL2/lib/x64/SDL2main.lib")
//#pragma comment(linker, "/DELAYLOAD:SDL2/lib/x64/SDL2.dll")

int main(int argc, char* args[])
{
    //声明表面
    SDL_Surface* hello = NULL;
    SDL_Surface* screen = NULL;
    //启动SDL
    SDL_Init(SDL_INIT_EVERYTHING);
    //设置窗口
    //screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
    //加载图像
    hello = SDL_LoadBMP("hello.bmp");
    //退出SDL 
    SDL_Quit();

    return 0;
}