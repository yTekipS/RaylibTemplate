#include "connect.hpp"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Simple Raylib Temple.");
    CustomText ct;
    SetTargetFPS(60);

    //* MAIN GAME LOOP
    while (!WindowShouldClose())
    {
        //* UPDATEa
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here

        //----------------------------------------------------------------------------------

        //* DRAW
        //----------------------------------------------------------------------------------
        BeginDrawing();
        ct.DrawCentered_DEFAULT("Hello, World!", screenWidth / 2, screenHeight / 2, 150, WHITE, 200);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();

    return 0;
}
