#include "raylib.h"

int main(void)
{
    const int screenWidth = 1280;
    const int screenHeight = 720;
    const Vector3 CubePlace = {640.0f,360.0f,0.0f};

    Camera3D camera = {0};

    InitWindow(screenWidth, screenHeight, "Raylib");

    SetTargetFPS(60);        

    //* MAIN GAME LOOP
    while (!WindowShouldClose())  
    {
        //* UPDATE
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        //* DRAW
        //----------------------------------------------------------------------------------
        BeginDrawing();

            DrawCube(CubePlace,100.0f,100.0f,0.0f,BLUE);
            ClearBackground(RAYWHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();        

    return 0;
}
